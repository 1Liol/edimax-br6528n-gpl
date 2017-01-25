/* config.h.  Generated automatically by configure.  */
/* config.h.in.  Generated automatically from configure.in by autoheader.  */

/* Define to empty if the keyword does not work.  */
/* #undef const */

/* Long story short: aclocal.m4 depends on autoconf 2.13
 * implementation details wrt "const"; newer versions
 * have different implementation details so for now we
 * put "const" here.  This may cause duplicate definitions
 * in config.h but that should be OK since they're the same.
 */
/* #undef const */

/* Define if you have the ether_hostton function.  */
#define HAVE_ETHER_HOSTTON 1

/* Define if you have the strerror function.  */
#define HAVE_STRERROR 1

/* Define if you have the strlcpy function.  */
#define HAVE_STRLCPY 1

/* Define if you have the <ifaddrs.h> header file.  */
/* #undef HAVE_IFADDRS_H */

/* Define if you have the <limits.h> header file.  */
#define HAVE_LIMITS_H 1

/* Define if you have the <netinet/if_ether.h> header file.  */
#define HAVE_NETINET_IF_ETHER_H 1

/* Define if you have the <sys/bufmod.h> header file.  */
/* #undef HAVE_SYS_BUFMOD_H */

/* Define if you have the <sys/dlpi_ext.h> header file.  */
/* #undef HAVE_SYS_DLPI_EXT_H */

/* Define if you have the <sys/ioccom.h> header file.  */
/* #undef HAVE_SYS_IOCCOM_H */

/* Define if you have the <sys/sockio.h> header file.  */
/* #undef HAVE_SYS_SOCKIO_H */

/* needed on HP-UX */
/* #undef _HPUX_SOURCE */

/* Define as token for inline if inlining supported */
#define inline inline

/* define if your compiler has __attribute__ */
#define HAVE___ATTRIBUTE__ 1

/* if we have u_int8_t */
/* #undef u_int8_t */

/* if we have u_int16_t */
/* #undef u_int16_t */

/* if we have u_int32_t */
/* #undef u_int32_t */

/* do not use protochain */
/* #undef NO_PROTOCHAIN */

/* IPv6 */
/* #undef INET6 */

/* Enable optimizer debugging */
/* #undef BDEBUG */

/* Enable parser debugging */
/* #undef YYDEBUG */

/* define if you have a /dev/dlpi */
/* #undef HAVE_DEV_DLPI */

/* /dev/dlpi directory */
/* #undef PCAP_DEV_PREFIX */

/* if if_packet.h has tpacket_stats defined */
#define HAVE_TPACKET_STATS 1

/* define if you have a /proc/net/dev */
#define HAVE_PROC_NET_DEV 1

/* define on AIX to get certain functions */
/* #undef _SUN */

/* on HP-UX 9.x */
/* #undef HAVE_HPUX9 */

/* on HP-UX 10.20 */
/* #undef HAVE_HPUX10_20 */

/* on sinix */
/* #undef sinix */

/* On solaris */
/* #undef HAVE_SOLARIS */

/* if there's an os_proto.h */
/* #undef HAVE_OS_PROTO_H */

/* if struct sockaddr has sa_len */
/* #undef HAVE_SOCKADDR_SA_LEN */

/* if ppa_info_t_dl_module_id exists */
/* #undef HAVE_HP_PPA_INFO_T_DL_MODULE_ID_1 */

/* if unaligned access fails */
#define LBL_ALIGN 1

