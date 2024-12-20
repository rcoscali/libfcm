/** @FileInfo libfcm.h
 * 
 * Public header file for libfcm library
 *
 * Copyright ©2024 Rémi COHEN SCALI / EFREI
 *
 * MIT License
 * -----------
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software 
 * and associated documentation files (the “Software”), to deal in the Software without restriction, 
 * including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
 * and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial
 * portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
 * LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#pragma once
#ifndef __LIBFCM_H__
#define __LIBFCM_H__

#ifdef TRUE
#undef TRUE
#endif /* !TRUE */
#define TRUE (1 == 1)

#ifdef FALSE
#undef FALSE
#endif /* !FALSE */
#define FALSE (0 == 1)

#include "libfcm/refdir.h"
#include "libfcm/diskfilecontent.h"
#include "libfcm/buffermem.h"

void FCM_init(void);
void FCM_finalize(void);

#endif /* !__LIBFCM_H__ */
