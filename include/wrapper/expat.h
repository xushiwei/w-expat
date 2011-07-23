/* -------------------------------------------------------------------------
// WINX: a C++ template GUI library - MOST SIMPLE BUT EFFECTIVE
// 
// This file is a part of the WINX Library.
// The use and distribution terms for this software are covered by the
// Common Public License 1.0 (http://opensource.org/licenses/cpl.php)
// which can be found in the file CPL.txt at this distribution. By using
// this software in any fashion, you are agreeing to be bound by the terms
// of this license. You must not remove this notice, or any other, from
// this software.
// 
// Module: wrapper/expat.h
// Creator: xushiwei
// Email: xushiweizh@gmail.com
// Date: 2009-7-2 23:57:09
// 
// $Id: expat.h,v 2009-7-2 23:57:09 xushiwei Exp $
// -----------------------------------------------------------------------*/
#ifndef WRAPPER_EXPAT_H
#define WRAPPER_EXPAT_H

// -------------------------------------------------------------------------

#ifndef Expat_INCLUDED
#include "expat/expat.h"
#endif

// -------------------------------------------------------------------------
// Link libexpat

#if !defined(Wrapper_Linked_expat)
#define Wrapper_Linked_expat
#pragma comment(lib, "libexpat")
#endif

// -------------------------------------------------------------------------

#endif /* WRAPPER_EXPAT_H */
