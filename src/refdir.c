/** @File refdir.c
 *
 * Implem file for refdir features in libfcm library
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

#include <stdlib.h>
#include <string.h>

#include "libfcm.h"

static char* __FCM_referenceDir = (char*)NULL;

/*
 * FCM_referenceDir_init
 *
 * Initialize referenceDir feature of libfcm library
 */
void FCM_referenceDir_init(void)
{
    __FCM_referenceDir = (char*)NULL;
}

/*
 * FCM_referenceDir_finalize
 *
 * Finalize libfcm library: release memory
 */
void FCM_referenceDir_finalize(void)
{
    if (__FCM_referenceDir != (char*)NULL)
        free((void*)__FCM_referenceDir);
}

/*
 * FCM_referenceDir_is_defined
 *
 * This function allows to know if the reference directory is defined for identifying files
 * to manage.
 *
 * @return FALSE if not defined, TRUE otherwise
 */
int
FCM_referenceDir_is_defined(void)
{
    return(__FCM_referenceDir != (char*)NULL? TRUE : FALSE);
}

/*
 * FCM_referenceDir_define
 *
 * This function allows to define the reference directory used for finding files to manage
 *
 * @param dir       the string passed for defining the reference directory
 */
void
FCM_referenceDir_define(const char* dir)
{
    if (__FCM_referenceDir)
        free((void*)__FCM_referenceDir);
    if (dir)
        __FCM_referenceDir = strdup(dir);
}

/*
 * FCM_referenceDir_get
 *
 * This function rerturns the value of the reference directory
 */
const char*
FCM_referenceDir_get(void)
{
    return(__FCM_referenceDir);
}
