/*******************************************************************************

License: 
This software and/or related materials was developed at the National Institute
of Standards and Technology (NIST) by employees of the Federal Government
in the course of their official duties. Pursuant to title 17 Section 105
of the United States Code, this software is not subject to copyright
protection and is in the public domain. 

This software and/or related materials have been determined to be not subject
to the EAR (see Part 734.3 of the EAR for exact details) because it is
a publicly available technology and software, and is freely distributed
to any interested party with no licensing requirements.  Therefore, it is 
permissible to distribute this software as a free download from the internet.

Disclaimer: 
This software and/or related materials was developed to promote biometric
standards and biometric technology testing for the Federal Government
in accordance with the USA PATRIOT Act and the Enhanced Border Security
and Visa Entry Reform Act. Specific hardware and software products identified
in this software were used in order to perform the software development.
In no case does such identification imply recommendation or endorsement
by the National Institute of Standards and Technology, nor does it imply that
the products and equipment identified are necessarily the best available
for the purpose.

This software and/or related materials are provided "AS-IS" without warranty
of any kind including NO WARRANTY OF PERFORMANCE, MERCHANTABILITY,
NO WARRANTY OF NON-INFRINGEMENT OF ANY 3RD PARTY INTELLECTUAL PROPERTY
or FITNESS FOR A PARTICULAR PURPOSE or for any purpose whatsoever, for the
licensed product, however used. In no event shall NIST be liable for any
damages and/or costs, including but not limited to incidental or consequential
damages of any kind, including economic damage or injury to property and lost
profits, regardless of whether NIST shall be advised, have reason to know,
or in fact shall know of the possibility.

By using this software, you agree to bear all risk relating to quality,
use and performance of the software and/or related materials.  You agree
to hold the Government harmless from any claim arising from your use
of the software.

*******************************************************************************/


#ifndef IMGUTIL_H
#define IMGUTIL_H


/* imageops.c */
extern int WordAlignImage(unsigned char **, int *, int *,
                          unsigned char *, int, int, int);

/* imgsnip.c */
extern void snip_rot_subimage(unsigned char *, const int, const int,
                              unsigned char *, const int, const int, const int,
                              const int, const float, unsigned char);
extern void snip_rot_subimage_interp(unsigned char *, const int, const int,
                              unsigned char *, const int, const int, const int,
                              const int, const float, unsigned char);

/* imgutil.c */
extern void init_image_data(unsigned char **, int *, int, int, int);
extern float PixPerByte(int);
extern int SizeFromDepth(int, int, int);
extern int WordAlignFromDepth(int, int);
extern unsigned char *allocate_image(int, int, int);
extern unsigned char *mallocate_image(int, int, int);
extern short *alloc_short_image(int, int);
extern unsigned char *alloc_char_image(int, int);
extern int *alloc_int_image(int, int);
extern int allocate_aligned_image(unsigned char **, int *, int, int, int);
extern int width_16(int);

/* rl.c */
extern void rlcomp(unsigned char *, int, unsigned char *, int *, int);
extern void PutNchar (int, int, unsigned char **, int *, int);
extern void rldecomp(unsigned char *, int, unsigned char *, int *, int);
extern void RLL_putc (unsigned char **, unsigned char, int, int *);

#endif /* !IMGUTIL_H */
