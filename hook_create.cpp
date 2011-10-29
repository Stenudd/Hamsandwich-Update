/* Ham Sandwich
 *   Copyright 2007
 *   By the AMX Mod X Development Team
 *
 *  Ham Sandwich is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation; either version 2 of the License, or (at
 *  your option) any later version.
 *
 *  Ham Sandwich is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Ham Sandwich; if not, write to the Free Software Foundation,
 *  Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
 *  In addition, as a special exception, the author gives permission to
 *  link the code of Ham Sandwich with the Half-Life Game Engine ("HL
 *  Engine") and Modified Game Libraries ("MODs") developed by Valve,
 *  L.L.C ("Valve"). You must obey the GNU General Public License in all
 *  respects for all of the code used other than the HL Engine and MODs
 *  from Valve. If you modify this file, you may extend this exception
 *  to your version of the file, but you are not obligated to do so. If
 *  you do not wish to do so, delete this exception statement from your
 *  version.
 */
#include "amxxmodule.h"

int Create_Void_Void(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_DONE);
}

int Create_Int_Void(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_DONE);
}

int Create_Void_Entvar(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Void_Cbase(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Int_Float_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_FLOAT, FP_CELL, FP_DONE);
}
	
int Create_Void_Entvar_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Int_Cbase(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Void_Int_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Int_Int_Str_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_STRING, FP_CELL, FP_DONE);
}

int Create_Int_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Int_Entvar(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Int_Entvar_Entvar_Float_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_CELL, FP_FLOAT, FP_CELL, FP_DONE);
}

int Create_Int_Entvar_Entvar_Float_Float_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_CELL, FP_FLOAT, FP_CELL, FP_DONE);
}

int Create_Void_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Void_Cbase_Cbase_Int_Float(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_CELL, FP_CELL, FP_FLOAT, FP_DONE);
}

int Create_Void_Float_Cbase_Int(AMX* amx, const char* func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_FLOAT, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Void_Entvar_Float_Vector_Trace_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_FLOAT, FP_ARRAY, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Void_Float_Vector_Trace_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_FLOAT, FP_ARRAY, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Str_Void(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_DONE);
}

int Create_Cbase_Void(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_DONE);
}

int Create_Vector_Void(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_DONE);
}

int Create_Vector_pVector(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_ARRAY, FP_DONE);
}

int Create_Int_pVector(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_ARRAY, FP_DONE);
}

int Create_Void_Entvar_Float_Float(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_FLOAT, FP_FLOAT, FP_DONE);
}

int Create_Int_pFloat_pFloat(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Void_Entvar_Float(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_FLOAT, FP_DONE);
}

int Create_Void_Int_Int_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Void_ItemInfo(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Float_Void(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_DONE);
}

int Create_Float_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Void_Float_Int(AMX* amx, const char* func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_FLOAT, FP_CELL, FP_DONE);
}

int Create_Void_Int_Float(AMX* amx, const char* func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_FLOAT, FP_DONE);
}

int Create_Void_Float(AMX* amx, const char* func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_FLOAT, FP_DONE);
}

int Create_Void_Float_Float_Float_Int(AMX* amx, const char* func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_FLOAT, FP_FLOAT, FP_FLOAT, FP_CELL, FP_DONE);
}

int Create_Vector_Float(AMX* amx, const char* func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_FLOAT, FP_DONE);
}

int Create_Void_Float_Cbase(AMX* amx, const char* func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_FLOAT, FP_CELL, FP_DONE);
}

int Create_Int_Float_Float(AMX* amx, const char* func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_FLOAT, FP_FLOAT, FP_DONE);
}

int Create_Int_Float(AMX* amx, const char* func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_FLOAT, FP_DONE);
}

int Create_Int_Int_Int(AMX* amx, const char* func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Void_Str_Float_Float_Float(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_STRING, FP_FLOAT, FP_FLOAT, FP_FLOAT, FP_DONE);
}

int Create_Void_Str_Float_Float_Float_Int_Cbase(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_STRING, FP_FLOAT, FP_FLOAT, FP_FLOAT, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Int_Vector_Vector_Float_Float(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_ARRAY, FP_ARRAY, FP_FLOAT, FP_FLOAT, FP_DONE);
}

int Create_Int_Short(AMX* amx, const char* func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Void_Entvar_Entvar_Float_Int_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_CELL, FP_FLOAT, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Void_Vector_Entvar_Entvar_Float_Int_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_ARRAY, FP_CELL, FP_CELL, FP_FLOAT, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Float_Int_Float(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_FLOAT, FP_DONE);
}

int Create_Int_Str(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_STRING, FP_DONE);
}

int Create_Void_Edict(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Int_Int_Str_Bool(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_STRING, FP_CELL, FP_DONE);
}

int Create_Void_Vector_Vector(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_ARRAY, FP_ARRAY, FP_DONE);
}

int Create_Void_Str_Bool(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_STRING, FP_CELL, FP_DONE);
}

int Create_Int_Str_Str_Int_Str_Int_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_STRING, FP_STRING, FP_CELL, FP_STRING, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Int_Int_Int_Float_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_CELL, FP_FLOAT, FP_CELL, FP_DONE);
}

int Create_Void_Str_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_STRING, FP_CELL, FP_DONE);
}

int Create_Void_Cbase_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Void_Str(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_STRING, FP_DONE);
}

int Create_Void_Vector(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_ARRAY, FP_DONE);
}

int Create_Int_Str_Vector_Str(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_STRING, FP_ARRAY, FP_STRING, FP_DONE);
}

int Create_Int_Str_Str(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_STRING, FP_STRING, FP_DONE);
}

int Create_Void_Float_Float(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_FLOAT, FP_FLOAT, FP_DONE);
}

int Create_Void_Str_Str_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_STRING, FP_STRING, FP_CELL, FP_DONE);
}

int Create_Int_pVector_pVector_Cbase_pFloat(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_ARRAY, FP_ARRAY, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Void_Cbase_pVector_Float(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_ARRAY, FP_CELL, FP_DONE);
}

int Create_Int_pVector_pVector_Float_Cbase_pVector(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_ARRAY, FP_ARRAY, FP_CELL, FP_CELL, FP_ARRAY, FP_DONE);
}

int Create_Int_Cbase_Bool(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Int_Vector_Vector(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_ARRAY, FP_ARRAY, FP_DONE);
}

int Create_Int_Entvar_Float(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Float_Float(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Void_Entvar_Entvar_Float(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_CELL, FP_FLOAT, FP_DONE);
}

int Create_Bool_Void(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_DONE);
}

int Create_Int_pVector_pVector_Float_Cbase_pVector_pVector_Bool(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_ARRAY, FP_ARRAY, FP_CELL, FP_CELL, FP_ARRAY, FP_ARRAY, FP_CELL, FP_DONE);
}

int Create_Int_pVector_Cbase(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_ARRAY, FP_CELL, FP_DONE);
}

int Create_Int_Vector(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_ARRAY, FP_DONE);
}

int Create_Int_Cbase_pVector(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_ARRAY, FP_DONE);
}

int Create_Void_Bool(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Bool_Cbase(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Bool_Int(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Void_Cbase_Float(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Void_Cbase_Bool(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_CELL, FP_DONE);
}

int Create_Vector_Vector_Vector_Vector(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_ARRAY, FP_ARRAY, FP_ARRAY, FP_DONE);
}

int Create_Str_Str(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_STRING, FP_DONE);
}

int Create_Void_Short(AMX *amx, const char *func)
{
	return MF_RegisterSPForwardByName(amx, func, FP_CELL, FP_CELL, FP_DONE);
}



int Create_Deprecated(AMX* amx, const char* func)
{
	return -1;
}
