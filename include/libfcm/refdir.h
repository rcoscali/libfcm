/** @FileInfo refdir.h
 * 
 * Public header file for refdir features in libfcm library
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
#ifndef __REFDIR_H__
#define __REFDIR_H__

/**
 * This library functions allows to setup and manage a root directory
 */

void FCM_referenceDir_init(void);
void FCM_referenceDir_finalize(void);
int FCM_referenceDir_is_defined(void);
void FCM_referenceDir_define(const char* dir);
const char* FCM_referenceDir_get(void);

#endif /* !__REFDIR_H__ */
