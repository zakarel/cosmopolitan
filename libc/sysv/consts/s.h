#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_S_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_S_H_
#include "libc/runtime/symbolic.h"
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const long S_IEXEC;
extern const long S_IFBLK;
extern const long S_IFCHR;
extern const long S_IFDIR;
extern const long S_IFIFO;
extern const long S_IFLNK;
extern const long S_IFMT;
extern const long S_IFREG;
extern const long S_IFSOCK;
extern const long S_IREAD;
extern const long S_IRGRP;
extern const long S_IROTH;
extern const long S_IRUSR;
extern const long S_IRWXG;
extern const long S_IRWXO;
extern const long S_IRWXU;
extern const long S_ISGID;
extern const long S_ISUID;
extern const long S_ISVTX;
extern const long S_IWGRP;
extern const long S_IWOTH;
extern const long S_IWRITE;
extern const long S_IWUSR;
extern const long S_IXGRP;
extern const long S_IXOTH;
extern const long S_IXUSR;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */

#define S_IFREG LITERALLY(0100000)
#define S_IFBLK LITERALLY(0060000)
#define S_IFCHR LITERALLY(0020000)
#define S_IFDIR LITERALLY(0040000)
#define S_IFIFO LITERALLY(0010000)
#define S_IFMT LITERALLY(0170000)
#define S_IFLNK LITERALLY(0120000)
#define S_IFSOCK LITERALLY(0140000)
#define S_ISVTX LITERALLY(01000)
#define S_ISGID LITERALLY(02000)
#define S_ISUID LITERALLY(04000)
#define S_IEXEC LITERALLY(00100)
#define S_IWRITE LITERALLY(00200)
#define S_IREAD LITERALLY(00400)
#define S_IXUSR LITERALLY(00100)
#define S_IWUSR LITERALLY(00200)
#define S_IRUSR LITERALLY(00400)
#define S_IRWXU LITERALLY(00700)
#define S_IXGRP LITERALLY(00010)
#define S_IWGRP LITERALLY(00020)
#define S_IRGRP LITERALLY(00040)
#define S_IRWXG LITERALLY(00070)
#define S_IXOTH LITERALLY(00001)
#define S_IWOTH LITERALLY(00002)
#define S_IROTH LITERALLY(00004)
#define S_IRWXO LITERALLY(00007)

#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_S_H_ */
