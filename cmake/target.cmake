if( WIN32 ) 
  if( ( CMAKE_SIZEOF_VOID_P EQUAL 8 AND NOT 32BITS ) OR 64BITS )
    set(TARGET_PLATFORM "win64")
  else()
    set(TARGET_PLATFORM "win32")
  endif()
elseif( ANDROID )
  set(IGNORE_VARS "${ANDROID_TARGET}")
  if( X86 )
    if( ( CMAKE_SIZEOF_VOID_P EQUAL 8 AND NOT 32BITS ) OR 64BITS )
      set(TARGET_PLATFORM "android-x86-64")
    else()
      set(TARGET_PLATFORM "android-x86-32")
    endif()
  else()
    if( ( CMAKE_SIZEOF_VOID_P EQUAL 8 AND NOT 32BITS ) OR 64BITS )
      set(TARGET_PLATFORM "android-arm64")
    else()
      set(TARGET_PLATFORM "android-arm32")
    endif()
  endif()
elseif( APPLE )
  if( ( CMAKE_SIZEOF_VOID_P EQUAL 8 AND NOT 32BITS ) OR 64BITS )
    if( "${SDK_NAME}" MATCHES "iphoneos" )
      set(TARGET_PLATFORM "ios-arm64")
    else()
      set(TARGET_PLATFORM "apple64")
    endif()
  else()
    set(TARGET_PLATFORM "apple32")
  endif()
elseif( UNIX )
  if( ( CMAKE_SIZEOF_VOID_P EQUAL 8 AND NOT 32BITS ) OR 64BITS )
    set(TARGET_PLATFORM "linux64")
  else()
    set(TARGET_PLATFORM "linux32")
  endif()
endif()

message( -- " Set target platform to ${TARGET_PLATFORM}")
