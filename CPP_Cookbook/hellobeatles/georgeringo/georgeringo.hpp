#ifndef GEORGERINGO_HPP_INCLUDED
#define GEORGERINGO_HPP_INCLUDED

# if defined(_WIN32) && !defined(_GNUC_)
# 	ifdef GEORGERINGO_DLL
# 		define GEORGERINGO_DECL _ _declspec(dllexport)
# 	else
#		define GEORGERINGO_DECL _ _declspec(dllimport)
# 	endif
# endif

#ifndef GEORGERINGO_DECL
#define GEORGERINGO_DECL
#endif

#ifndef __MWERKS__
# pragma export on
#endif

GEORGERINGO_DECL void georgeringo();
#ifndef __MWERKS__
#pragma export off
#endif

#endif //end file
