#ifndef OPENLIBM_DEFS_H_
#define OPENLIBM_DEFS_H_

#ifdef _WIN32
# ifdef IMPORT_EXPORTS
#  define OLM_DLLEXPORT __declspec(dllimport)
# else
#  define OLM_DLLEXPORT __declspec(dllexport)
# endif
#else
    #ifndef OLM_DLLEXPORT
        #define OLM_DLLEXPORT 
    #endif
#endif

#endif // OPENLIBM_DEFS_H_
