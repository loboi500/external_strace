#ifdef AGPIOC_ALLOCATE
# undef AGPIOC_ALLOCATE
# define AGPIOC_ALLOCATE 0xc0044106
#endif
#ifdef AGPIOC_BIND
# undef AGPIOC_BIND
# define AGPIOC_BIND 0x40044108
#endif
#ifdef AGPIOC_INFO
# undef AGPIOC_INFO
# define AGPIOC_INFO 0x80044100
#endif
#ifdef AGPIOC_PROTECT
# undef AGPIOC_PROTECT
# define AGPIOC_PROTECT 0x40044105
#endif
#ifdef AGPIOC_RESERVE
# undef AGPIOC_RESERVE
# define AGPIOC_RESERVE 0x40044104
#endif
#ifdef AGPIOC_SETUP
# undef AGPIOC_SETUP
# define AGPIOC_SETUP 0x40044103
#endif
#ifdef AGPIOC_UNBIND
# undef AGPIOC_UNBIND
# define AGPIOC_UNBIND 0x40044109
#endif
#ifdef ASHMEM_SET_PROT_MASK
# undef ASHMEM_SET_PROT_MASK
# define ASHMEM_SET_PROT_MASK 0x40047705
#endif
#ifdef ASHMEM_SET_SIZE
# undef ASHMEM_SET_SIZE
# define ASHMEM_SET_SIZE 0x40047703
#endif
#ifdef ATM_ADDADDR
# undef ATM_ADDADDR
# define ATM_ADDADDR 0x400c6188
#endif
#ifdef ATM_ADDLECSADDR
# undef ATM_ADDLECSADDR
# define ATM_ADDLECSADDR 0x400c618e
#endif
#ifdef ATM_ADDPARTY
# undef ATM_ADDPARTY
# define ATM_ADDPARTY 0x400861f4
#endif
#ifdef ATM_DELADDR
# undef ATM_DELADDR
# define ATM_DELADDR 0x400c6189
#endif
#ifdef ATM_DELLECSADDR
# undef ATM_DELLECSADDR
# define ATM_DELLECSADDR 0x400c618f
#endif
#ifdef ATM_GETADDR
# undef ATM_GETADDR
# define ATM_GETADDR 0x400c6186
#endif
#ifdef ATM_GETCIRANGE
# undef ATM_GETCIRANGE
# define ATM_GETCIRANGE 0x400c618a
#endif
#ifdef ATM_GETESI
# undef ATM_GETESI
# define ATM_GETESI 0x400c6185
#endif
#ifdef ATM_GETLECSADDR
# undef ATM_GETLECSADDR
# define ATM_GETLECSADDR 0x400c6190
#endif
#ifdef ATM_GETLINKRATE
# undef ATM_GETLINKRATE
# define ATM_GETLINKRATE 0x400c6181
#endif
#ifdef ATM_GETLOOP
# undef ATM_GETLOOP
# define ATM_GETLOOP 0x400c6152
#endif
#ifdef ATM_GETNAMES
# undef ATM_GETNAMES
# define ATM_GETNAMES 0x40086183
#endif
#ifdef ATM_GETSTAT
# undef ATM_GETSTAT
# define ATM_GETSTAT 0x400c6150
#endif
#ifdef ATM_GETSTATZ
# undef ATM_GETSTATZ
# define ATM_GETSTATZ 0x400c6151
#endif
#ifdef ATM_GETTYPE
# undef ATM_GETTYPE
# define ATM_GETTYPE 0x400c6184
#endif
#ifdef ATM_QUERYLOOP
# undef ATM_QUERYLOOP
# define ATM_QUERYLOOP 0x400c6154
#endif
#ifdef ATM_RSTADDR
# undef ATM_RSTADDR
# define ATM_RSTADDR 0x400c6187
#endif
#ifdef ATM_SETCIRANGE
# undef ATM_SETCIRANGE
# define ATM_SETCIRANGE 0x400c618b
#endif
#ifdef ATM_SETESI
# undef ATM_SETESI
# define ATM_SETESI 0x400c618c
#endif
#ifdef ATM_SETESIF
# undef ATM_SETESIF
# define ATM_SETESIF 0x400c618d
#endif
#ifdef ATM_SETLOOP
# undef ATM_SETLOOP
# define ATM_SETLOOP 0x400c6153
#endif
#ifdef AUTOFS_IOC_SETTIMEOUT
# undef AUTOFS_IOC_SETTIMEOUT
# define AUTOFS_IOC_SETTIMEOUT 0xc0049364
#endif
#ifdef BLKBSZGET
# undef BLKBSZGET
# define BLKBSZGET 0x80041270
#endif
#ifdef BLKBSZSET
# undef BLKBSZSET
# define BLKBSZSET 0x40041271
#endif
#ifdef BLKGETSIZE64
# undef BLKGETSIZE64
# define BLKGETSIZE64 0x80041272
#endif
#ifdef CAPI_MANUFACTURER_CMD
# undef CAPI_MANUFACTURER_CMD
# define CAPI_MANUFACTURER_CMD 0xc0084320
#endif
#ifdef CCISS_BIG_PASSTHRU
# undef CCISS_BIG_PASSTHRU
# define CCISS_BIG_PASSTHRU 0xc0584212
#endif
#ifdef CCISS_PASSTHRU
# undef CCISS_PASSTHRU
# define CCISS_PASSTHRU 0xc054420b
#endif
#ifdef CHIOGSTATUS
# undef CHIOGSTATUS
# define CHIOGSTATUS 0x40086308
#endif
#ifdef CIOC_KERNEL_VERSION
# undef CIOC_KERNEL_VERSION
# define CIOC_KERNEL_VERSION 0xc004630a
#endif
#ifdef CM_IOCGATR
# undef CM_IOCGATR
# define CM_IOCGATR 0xc0046301
#endif
#ifdef CM_IOCGSTATUS
# undef CM_IOCGSTATUS
# define CM_IOCGSTATUS 0x80046300
#endif
#ifdef CM_IOCSPTS
# undef CM_IOCSPTS
# define CM_IOCSPTS 0x40046302
#endif
#ifdef CM_IOSDBGLVL
# undef CM_IOSDBGLVL
# define CM_IOSDBGLVL 0x400463fa
#endif
#ifdef DRM_IOCTL_ADD_BUFS
# undef DRM_IOCTL_ADD_BUFS
# define DRM_IOCTL_ADD_BUFS 0xc0186416
#endif
#ifdef DRM_IOCTL_ADD_MAP
# undef DRM_IOCTL_ADD_MAP
# define DRM_IOCTL_ADD_MAP 0xc0186415
#endif
#ifdef DRM_IOCTL_AGP_ALLOC
# undef DRM_IOCTL_AGP_ALLOC
# define DRM_IOCTL_AGP_ALLOC 0xc0106434
#endif
#ifdef DRM_IOCTL_AGP_BIND
# undef DRM_IOCTL_AGP_BIND
# define DRM_IOCTL_AGP_BIND 0x40086436
#endif
#ifdef DRM_IOCTL_AGP_ENABLE
# undef DRM_IOCTL_AGP_ENABLE
# define DRM_IOCTL_AGP_ENABLE 0x40046432
#endif
#ifdef DRM_IOCTL_AGP_FREE
# undef DRM_IOCTL_AGP_FREE
# define DRM_IOCTL_AGP_FREE 0x40106435
#endif
#ifdef DRM_IOCTL_AGP_INFO
# undef DRM_IOCTL_AGP_INFO
# define DRM_IOCTL_AGP_INFO 0x80206433
#endif
#ifdef DRM_IOCTL_AGP_UNBIND
# undef DRM_IOCTL_AGP_UNBIND
# define DRM_IOCTL_AGP_UNBIND 0x40086437
#endif
#ifdef DRM_IOCTL_DMA
# undef DRM_IOCTL_DMA
# define DRM_IOCTL_DMA 0xc0286429
#endif
#ifdef DRM_IOCTL_FREE_BUFS
# undef DRM_IOCTL_FREE_BUFS
# define DRM_IOCTL_FREE_BUFS 0x4008641a
#endif
#ifdef DRM_IOCTL_GET_CLIENT
# undef DRM_IOCTL_GET_CLIENT
# define DRM_IOCTL_GET_CLIENT 0xc0186405
#endif
#ifdef DRM_IOCTL_GET_MAP
# undef DRM_IOCTL_GET_MAP
# define DRM_IOCTL_GET_MAP 0xc0186404
#endif
#ifdef DRM_IOCTL_GET_SAREA_CTX
# undef DRM_IOCTL_GET_SAREA_CTX
# define DRM_IOCTL_GET_SAREA_CTX 0xc008641d
#endif
#ifdef DRM_IOCTL_GET_STATS
# undef DRM_IOCTL_GET_STATS
# define DRM_IOCTL_GET_STATS 0x807c6406
#endif
#ifdef DRM_IOCTL_GET_UNIQUE
# undef DRM_IOCTL_GET_UNIQUE
# define DRM_IOCTL_GET_UNIQUE 0xc0086401
#endif
#ifdef DRM_IOCTL_I810_COPY
# undef DRM_IOCTL_I810_COPY
# define DRM_IOCTL_I810_COPY 0x400c6447
#endif
#ifdef DRM_IOCTL_I810_GETBUF
# undef DRM_IOCTL_I810_GETBUF
# define DRM_IOCTL_I810_GETBUF 0xc0106445
#endif
#ifdef DRM_IOCTL_I810_MC
# undef DRM_IOCTL_I810_MC
# define DRM_IOCTL_I810_MC 0x4014644c
#endif
#ifdef DRM_IOCTL_I915_ALLOC
# undef DRM_IOCTL_I915_ALLOC
# define DRM_IOCTL_I915_ALLOC 0xc0106448
#endif
#ifdef DRM_IOCTL_I915_BATCHBUFFER
# undef DRM_IOCTL_I915_BATCHBUFFER
# define DRM_IOCTL_I915_BATCHBUFFER 0x40186443
#endif
#ifdef DRM_IOCTL_I915_CMDBUFFER
# undef DRM_IOCTL_I915_CMDBUFFER
# define DRM_IOCTL_I915_CMDBUFFER 0x4018644b
#endif
#ifdef DRM_IOCTL_I915_GETPARAM
# undef DRM_IOCTL_I915_GETPARAM
# define DRM_IOCTL_I915_GETPARAM 0xc0086446
#endif
#ifdef DRM_IOCTL_I915_IRQ_EMIT
# undef DRM_IOCTL_I915_IRQ_EMIT
# define DRM_IOCTL_I915_IRQ_EMIT 0xc0046444
#endif
#ifdef DRM_IOCTL_INFO_BUFS
# undef DRM_IOCTL_INFO_BUFS
# define DRM_IOCTL_INFO_BUFS 0xc0086418
#endif
#ifdef DRM_IOCTL_MAP_BUFS
# undef DRM_IOCTL_MAP_BUFS
# define DRM_IOCTL_MAP_BUFS 0xc00c6419
#endif
#ifdef DRM_IOCTL_MARK_BUFS
# undef DRM_IOCTL_MARK_BUFS
# define DRM_IOCTL_MARK_BUFS 0x40186417
#endif
#ifdef DRM_IOCTL_MGA_DMA_BOOTSTRAP
# undef DRM_IOCTL_MGA_DMA_BOOTSTRAP
# define DRM_IOCTL_MGA_DMA_BOOTSTRAP 0xc01c644c
#endif
#ifdef DRM_IOCTL_MGA_GETPARAM
# undef DRM_IOCTL_MGA_GETPARAM
# define DRM_IOCTL_MGA_GETPARAM 0xc0086449
#endif
#ifdef DRM_IOCTL_MGA_INIT
# undef DRM_IOCTL_MGA_INIT
# define DRM_IOCTL_MGA_INIT 0x405c6440
#endif
#ifdef DRM_IOCTL_R128_DEPTH
# undef DRM_IOCTL_R128_DEPTH
# define DRM_IOCTL_R128_DEPTH 0x4018644c
#endif
#ifdef DRM_IOCTL_R128_GETPARAM
# undef DRM_IOCTL_R128_GETPARAM
# define DRM_IOCTL_R128_GETPARAM 0xc0086452
#endif
#ifdef DRM_IOCTL_R128_INIT
# undef DRM_IOCTL_R128_INIT
# define DRM_IOCTL_R128_INIT 0x40586440
#endif
#ifdef DRM_IOCTL_R128_STIPPLE
# undef DRM_IOCTL_R128_STIPPLE
# define DRM_IOCTL_R128_STIPPLE 0x4004644d
#endif
#ifdef DRM_IOCTL_RADEON_ALLOC
# undef DRM_IOCTL_RADEON_ALLOC
# define DRM_IOCTL_RADEON_ALLOC 0xc0106453
#endif
#ifdef DRM_IOCTL_RADEON_CLEAR
# undef DRM_IOCTL_RADEON_CLEAR
# define DRM_IOCTL_RADEON_CLEAR 0x40186448
#endif
#ifdef DRM_IOCTL_RADEON_CMDBUF
# undef DRM_IOCTL_RADEON_CMDBUF
# define DRM_IOCTL_RADEON_CMDBUF 0x40106450
#endif
#ifdef DRM_IOCTL_RADEON_CP_INIT
# undef DRM_IOCTL_RADEON_CP_INIT
# define DRM_IOCTL_RADEON_CP_INIT 0x40546440
#endif
#ifdef DRM_IOCTL_RADEON_GETPARAM
# undef DRM_IOCTL_RADEON_GETPARAM
# define DRM_IOCTL_RADEON_GETPARAM 0xc0086451
#endif
#ifdef DRM_IOCTL_RADEON_IRQ_EMIT
# undef DRM_IOCTL_RADEON_IRQ_EMIT
# define DRM_IOCTL_RADEON_IRQ_EMIT 0xc0046456
#endif
#ifdef DRM_IOCTL_RADEON_STIPPLE
# undef DRM_IOCTL_RADEON_STIPPLE
# define DRM_IOCTL_RADEON_STIPPLE 0x4004644c
#endif
#ifdef DRM_IOCTL_RADEON_TEXTURE
# undef DRM_IOCTL_RADEON_TEXTURE
# define DRM_IOCTL_RADEON_TEXTURE 0xc018644e
#endif
#ifdef DRM_IOCTL_RADEON_VERTEX2
# undef DRM_IOCTL_RADEON_VERTEX2
# define DRM_IOCTL_RADEON_VERTEX2 0x4018644f
#endif
#ifdef DRM_IOCTL_RES_CTX
# undef DRM_IOCTL_RES_CTX
# define DRM_IOCTL_RES_CTX 0xc0086426
#endif
#ifdef DRM_IOCTL_RM_MAP
# undef DRM_IOCTL_RM_MAP
# define DRM_IOCTL_RM_MAP 0x4018641b
#endif
#ifdef DRM_IOCTL_SAVAGE_BCI_CMDBUF
# undef DRM_IOCTL_SAVAGE_BCI_CMDBUF
# define DRM_IOCTL_SAVAGE_BCI_CMDBUF 0x40246441
#endif
#ifdef DRM_IOCTL_SAVAGE_BCI_INIT
# undef DRM_IOCTL_SAVAGE_BCI_INIT
# define DRM_IOCTL_SAVAGE_BCI_INIT 0x40506440
#endif
#ifdef DRM_IOCTL_SET_SAREA_CTX
# undef DRM_IOCTL_SET_SAREA_CTX
# define DRM_IOCTL_SET_SAREA_CTX 0x4008641c
#endif
#ifdef DRM_IOCTL_SET_UNIQUE
# undef DRM_IOCTL_SET_UNIQUE
# define DRM_IOCTL_SET_UNIQUE 0x40086410
#endif
#ifdef DRM_IOCTL_SG_ALLOC
# undef DRM_IOCTL_SG_ALLOC
# define DRM_IOCTL_SG_ALLOC 0xc0086438
#endif
#ifdef DRM_IOCTL_SG_FREE
# undef DRM_IOCTL_SG_FREE
# define DRM_IOCTL_SG_FREE 0x40086439
#endif
#ifdef DRM_IOCTL_SIS_AGP_ALLOC
# undef DRM_IOCTL_SIS_AGP_ALLOC
# define DRM_IOCTL_SIS_AGP_ALLOC 0xc0106454
#endif
#ifdef DRM_IOCTL_SIS_AGP_FREE
# undef DRM_IOCTL_SIS_AGP_FREE
# define DRM_IOCTL_SIS_AGP_FREE 0x40106455
#endif
#ifdef DRM_IOCTL_SIS_AGP_INIT
# undef DRM_IOCTL_SIS_AGP_INIT
# define DRM_IOCTL_SIS_AGP_INIT 0xc0086453
#endif
#ifdef DRM_IOCTL_SIS_FB_ALLOC
# undef DRM_IOCTL_SIS_FB_ALLOC
# define DRM_IOCTL_SIS_FB_ALLOC 0xc0106444
#endif
#ifdef DRM_IOCTL_SIS_FB_FREE
# undef DRM_IOCTL_SIS_FB_FREE
# define DRM_IOCTL_SIS_FB_FREE 0x40106445
#endif
#ifdef DRM_IOCTL_SIS_FB_INIT
# undef DRM_IOCTL_SIS_FB_INIT
# define DRM_IOCTL_SIS_FB_INIT 0x40086456
#endif
#ifdef DRM_IOCTL_VERSION
# undef DRM_IOCTL_VERSION
# define DRM_IOCTL_VERSION 0xc0246400
#endif
#ifdef DRM_IOCTL_VIA_ALLOCMEM
# undef DRM_IOCTL_VIA_ALLOCMEM
# define DRM_IOCTL_VIA_ALLOCMEM 0xc0146440
#endif
#ifdef DRM_IOCTL_VIA_CMDBUFFER
# undef DRM_IOCTL_VIA_CMDBUFFER
# define DRM_IOCTL_VIA_CMDBUFFER 0x40086448
#endif
#ifdef DRM_IOCTL_VIA_DMA_BLIT
# undef DRM_IOCTL_VIA_DMA_BLIT
# define DRM_IOCTL_VIA_DMA_BLIT 0x4028644e
#endif
#ifdef DRM_IOCTL_VIA_DMA_INIT
# undef DRM_IOCTL_VIA_DMA_INIT
# define DRM_IOCTL_VIA_DMA_INIT 0xc0106447
#endif
#ifdef DRM_IOCTL_VIA_FREEMEM
# undef DRM_IOCTL_VIA_FREEMEM
# define DRM_IOCTL_VIA_FREEMEM 0x40146441
#endif
#ifdef DRM_IOCTL_VIA_MAP_INIT
# undef DRM_IOCTL_VIA_MAP_INIT
# define DRM_IOCTL_VIA_MAP_INIT 0xc0146444
#endif
#ifdef DRM_IOCTL_VIA_PCICMD
# undef DRM_IOCTL_VIA_PCICMD
# define DRM_IOCTL_VIA_PCICMD 0x4008644a
#endif
#ifdef DRM_IOCTL_VIA_WAIT_IRQ
# undef DRM_IOCTL_VIA_WAIT_IRQ
# define DRM_IOCTL_VIA_WAIT_IRQ 0xc010644d
#endif
#ifdef DRM_IOCTL_WAIT_VBLANK
# undef DRM_IOCTL_WAIT_VBLANK
# define DRM_IOCTL_WAIT_VBLANK 0xc010643a
#endif
#ifdef ENI_MEMDUMP
# undef ENI_MEMDUMP
# define ENI_MEMDUMP 0x400c6160
#endif
#ifdef ENI_SETMULT
# undef ENI_SETMULT
# define ENI_SETMULT 0x400c6167
#endif
#ifdef EVIOCSFF
# undef EVIOCSFF
# define EVIOCSFF 0x402c4580
#endif
#ifdef FBIO_CURSOR
# undef FBIO_CURSOR
# define FBIO_CURSOR 0xc0484608
#endif
#ifdef FBIO_GETCONTROL2
# undef FBIO_GETCONTROL2
# define FBIO_GETCONTROL2 0x80044689
#endif
#ifdef FBIO_RADEON_GET_MIRROR
# undef FBIO_RADEON_GET_MIRROR
# define FBIO_RADEON_GET_MIRROR 0x80044003
#endif
#ifdef FBIO_RADEON_SET_MIRROR
# undef FBIO_RADEON_SET_MIRROR
# define FBIO_RADEON_SET_MIRROR 0x40044004
#endif
#ifdef FDDEFPRM
# undef FDDEFPRM
# define FDDEFPRM 0x401c0243
#endif
#ifdef FDGETDRVPRM
# undef FDGETDRVPRM
# define FDGETDRVPRM 0x80580211
#endif
#ifdef FDGETDRVSTAT
# undef FDGETDRVSTAT
# define FDGETDRVSTAT 0x80340212
#endif
#ifdef FDGETFDCSTAT
# undef FDGETFDCSTAT
# define FDGETFDCSTAT 0x80200215
#endif
#ifdef FDGETPRM
# undef FDGETPRM
# define FDGETPRM 0x801c0204
#endif
#ifdef FDPOLLDRVSTAT
# undef FDPOLLDRVSTAT
# define FDPOLLDRVSTAT 0x80340213
#endif
#ifdef FDSETDRVPRM
# undef FDSETDRVPRM
# define FDSETDRVPRM 0x40580290
#endif
#ifdef FDSETPRM
# undef FDSETPRM
# define FDSETPRM 0x401c0242
#endif
#ifdef FDWERRORGET
# undef FDWERRORGET
# define FDWERRORGET 0x80180217
#endif
#ifdef FE_GET_PROPERTY
# undef FE_GET_PROPERTY
# define FE_GET_PROPERTY 0x80086f53
#endif
#ifdef FE_SET_PROPERTY
# undef FE_SET_PROPERTY
# define FE_SET_PROPERTY 0x40086f52
#endif
#ifdef FS_IOC_GETFLAGS
# undef FS_IOC_GETFLAGS
# define FS_IOC_GETFLAGS 0x80046601
#endif
#ifdef FS_IOC_GETVERSION
# undef FS_IOC_GETVERSION
# define FS_IOC_GETVERSION 0x80047601
#endif
#ifdef FS_IOC_SETFLAGS
# undef FS_IOC_SETFLAGS
# define FS_IOC_SETFLAGS 0x40046602
#endif
#ifdef FS_IOC_SETVERSION
# undef FS_IOC_SETVERSION
# define FS_IOC_SETVERSION 0x40047602
#endif
#ifdef HE_GET_REG
# undef HE_GET_REG
# define HE_GET_REG 0x400c6160
#endif
#ifdef HFI1_IOCTL_ACK_EVENT
# undef HFI1_IOCTL_ACK_EVENT
# define HFI1_IOCTL_ACK_EVENT 0x40041bea
#endif
#ifdef HPET_INFO
# undef HPET_INFO
# define HPET_INFO 0x800c6803
#endif
#ifdef HPET_IRQFREQ
# undef HPET_IRQFREQ
# define HPET_IRQFREQ 0x40046806
#endif
#ifdef I2OHRTGET
# undef I2OHRTGET
# define I2OHRTGET 0xc00c6901
#endif
#ifdef I2OHTML
# undef I2OHTML
# define I2OHTML 0xc01c6909
#endif
#ifdef I2OLCTGET
# undef I2OLCTGET
# define I2OLCTGET 0xc00c6902
#endif
#ifdef I2OPARMGET
# undef I2OPARMGET
# define I2OPARMGET 0xc0186904
#endif
#ifdef I2OPARMSET
# undef I2OPARMSET
# define I2OPARMSET 0xc0186903
#endif
#ifdef I2OPASSTHRU
# undef I2OPASSTHRU
# define I2OPASSTHRU 0x8008690c
#endif
#ifdef I2OSWDEL
# undef I2OSWDEL
# define I2OSWDEL 0xc01c6907
#endif
#ifdef I2OSWDL
# undef I2OSWDL
# define I2OSWDL 0xc01c6905
#endif
#ifdef I2OSWUL
# undef I2OSWUL
# define I2OSWUL 0xc01c6906
#endif
#ifdef I8K_FN_STATUS
# undef I8K_FN_STATUS
# define I8K_FN_STATUS 0x80046983
#endif
#ifdef I8K_GET_FAN
# undef I8K_GET_FAN
# define I8K_GET_FAN 0xc0046986
#endif
#ifdef I8K_GET_SPEED
# undef I8K_GET_SPEED
# define I8K_GET_SPEED 0xc0046985
#endif
#ifdef I8K_GET_TEMP
# undef I8K_GET_TEMP
# define I8K_GET_TEMP 0x80046984
#endif
#ifdef I8K_POWER_STATUS
# undef I8K_POWER_STATUS
# define I8K_POWER_STATUS 0x80046982
#endif
#ifdef I8K_SET_FAN
# undef I8K_SET_FAN
# define I8K_SET_FAN 0xc0046987
#endif
#ifdef IDT77105_GETSTAT
# undef IDT77105_GETSTAT
# define IDT77105_GETSTAT 0x400c6132
#endif
#ifdef IDT77105_GETSTATZ
# undef IDT77105_GETSTATZ
# define IDT77105_GETSTATZ 0x400c6133
#endif
#ifdef IOCTL_GNTDEV_GRANT_COPY
# undef IOCTL_GNTDEV_GRANT_COPY
# define IOCTL_GNTDEV_GRANT_COPY 0x00084708
#endif
#ifdef IOW_READ
# undef IOW_READ
# define IOW_READ 0x4004c002
#endif
#ifdef IOW_WRITE
# undef IOW_WRITE
# define IOW_WRITE 0x4004c001
#endif
#ifdef IPMICTL_RECEIVE_MSG
# undef IPMICTL_RECEIVE_MSG
# define IPMICTL_RECEIVE_MSG 0xc018690c
#endif
#ifdef IPMICTL_RECEIVE_MSG_TRUNC
# undef IPMICTL_RECEIVE_MSG_TRUNC
# define IPMICTL_RECEIVE_MSG_TRUNC 0xc018690b
#endif
#ifdef IPMICTL_SEND_COMMAND
# undef IPMICTL_SEND_COMMAND
# define IPMICTL_SEND_COMMAND 0x8014690d
#endif
#ifdef IPMICTL_SEND_COMMAND_SETTIME
# undef IPMICTL_SEND_COMMAND_SETTIME
# define IPMICTL_SEND_COMMAND_SETTIME 0x801c6915
#endif
#ifdef IVTVFB_IOC_DMA_FRAME
# undef IVTVFB_IOC_DMA_FRAME
# define IVTVFB_IOC_DMA_FRAME 0x400c56c0
#endif
#ifdef IVTV_IOC_DMA_FRAME
# undef IVTV_IOC_DMA_FRAME
# define IVTV_IOC_DMA_FRAME 0x403856c0
#endif
#ifdef KCOV_INIT_TRACE
# undef KCOV_INIT_TRACE
# define KCOV_INIT_TRACE 0x80046301
#endif
#ifdef MATROXFB_GET_ALL_OUTPUTS
# undef MATROXFB_GET_ALL_OUTPUTS
# define MATROXFB_GET_ALL_OUTPUTS 0x80046efb
#endif
#ifdef MATROXFB_GET_AVAILABLE_OUTPUTS
# undef MATROXFB_GET_AVAILABLE_OUTPUTS
# define MATROXFB_GET_AVAILABLE_OUTPUTS 0x80046ef9
#endif
#ifdef MATROXFB_GET_OUTPUT_CONNECTION
# undef MATROXFB_GET_OUTPUT_CONNECTION
# define MATROXFB_GET_OUTPUT_CONNECTION 0x80046ef8
#endif
#ifdef MATROXFB_GET_OUTPUT_MODE
# undef MATROXFB_GET_OUTPUT_MODE
# define MATROXFB_GET_OUTPUT_MODE 0xc0046efa
#endif
#ifdef MATROXFB_SET_OUTPUT_CONNECTION
# undef MATROXFB_SET_OUTPUT_CONNECTION
# define MATROXFB_SET_OUTPUT_CONNECTION 0x40046ef8
#endif
#ifdef MATROXFB_SET_OUTPUT_MODE
# undef MATROXFB_SET_OUTPUT_MODE
# define MATROXFB_SET_OUTPUT_MODE 0x40046efa
#endif
#ifdef MEDIA_IOC_ENUM_LINKS
# undef MEDIA_IOC_ENUM_LINKS
# define MEDIA_IOC_ENUM_LINKS 0xc01c7c02
#endif
#ifdef MEMREADOOB
# undef MEMREADOOB
# define MEMREADOOB 0xc00c4d04
#endif
#ifdef MEMWRITEOOB
# undef MEMWRITEOOB
# define MEMWRITEOOB 0xc00c4d03
#endif
#ifdef MGSL_IOCGPARAMS
# undef MGSL_IOCGPARAMS
# define MGSL_IOCGPARAMS 0x80206d01
#endif
#ifdef MGSL_IOCSPARAMS
# undef MGSL_IOCSPARAMS
# define MGSL_IOCSPARAMS 0x40206d00
#endif
#ifdef MIC_VIRTIO_ADD_DEVICE
# undef MIC_VIRTIO_ADD_DEVICE
# define MIC_VIRTIO_ADD_DEVICE 0xc0047301
#endif
#ifdef MIC_VIRTIO_CONFIG_CHANGE
# undef MIC_VIRTIO_CONFIG_CHANGE
# define MIC_VIRTIO_CONFIG_CHANGE 0xc0047305
#endif
#ifdef MIC_VIRTIO_COPY_DESC
# undef MIC_VIRTIO_COPY_DESC
# define MIC_VIRTIO_COPY_DESC 0xc0047302
#endif
#ifdef MMTIMER_GETCOUNTER
# undef MMTIMER_GETCOUNTER
# define MMTIMER_GETCOUNTER 0x80046d09
#endif
#ifdef MMTIMER_GETFREQ
# undef MMTIMER_GETFREQ
# define MMTIMER_GETFREQ 0x80046d02
#endif
#ifdef MMTIMER_GETRES
# undef MMTIMER_GETRES
# define MMTIMER_GETRES 0x80046d01
#endif
#ifdef MTIOCGET
# undef MTIOCGET
# define MTIOCGET 0x801c6d02
#endif
#ifdef MTIOCPOS
# undef MTIOCPOS
# define MTIOCPOS 0x80046d03
#endif
#ifdef NCIUARTSETDRIVER
# undef NCIUARTSETDRIVER
# define NCIUARTSETDRIVER 0x40045500
#endif
#ifdef NS_GETPSTAT
# undef NS_GETPSTAT
# define NS_GETPSTAT 0xc00c6161
#endif
#ifdef NS_SETBUFLEV
# undef NS_SETBUFLEV
# define NS_SETBUFLEV 0x400c6162
#endif
#ifdef OMAPFB_MEMORY_READ
# undef OMAPFB_MEMORY_READ
# define OMAPFB_MEMORY_READ 0x80104f3a
#endif
#ifdef OSD_GET_CAPABILITY
# undef OSD_GET_CAPABILITY
# define OSD_GET_CAPABILITY 0x80086fa1
#endif
#ifdef OSD_SEND_CMD
# undef OSD_SEND_CMD
# define OSD_SEND_CMD 0x401c6fa0
#endif
#ifdef PCITEST_COPY
# undef PCITEST_COPY
# define PCITEST_COPY 0x40045006
#endif
#ifdef PCITEST_READ
# undef PCITEST_READ
# define PCITEST_READ 0x40045005
#endif
#ifdef PCITEST_WRITE
# undef PCITEST_WRITE
# define PCITEST_WRITE 0x40045004
#endif
#ifdef PERF_EVENT_IOC_ID
# undef PERF_EVENT_IOC_ID
# define PERF_EVENT_IOC_ID 0x80042407
#endif
#ifdef PERF_EVENT_IOC_MODIFY_ATTRIBUTES
# undef PERF_EVENT_IOC_MODIFY_ATTRIBUTES
# define PERF_EVENT_IOC_MODIFY_ATTRIBUTES 0x4004240b
#endif
#ifdef PERF_EVENT_IOC_QUERY_BPF
# undef PERF_EVENT_IOC_QUERY_BPF
# define PERF_EVENT_IOC_QUERY_BPF 0xc004240a
#endif
#ifdef PERF_EVENT_IOC_SET_FILTER
# undef PERF_EVENT_IOC_SET_FILTER
# define PERF_EVENT_IOC_SET_FILTER 0x40042406
#endif
#ifdef PHN_GET_REG
# undef PHN_GET_REG
# define PHN_GET_REG 0xc0047000
#endif
#ifdef PHN_GET_REGS
# undef PHN_GET_REGS
# define PHN_GET_REGS 0xc0047002
#endif
#ifdef PHN_SET_REG
# undef PHN_SET_REG
# define PHN_SET_REG 0x40047001
#endif
#ifdef PHN_SET_REGS
# undef PHN_SET_REGS
# define PHN_SET_REGS 0x40047003
#endif
#ifdef PMU_IOC_CAN_SLEEP
# undef PMU_IOC_CAN_SLEEP
# define PMU_IOC_CAN_SLEEP 0x80044205
#endif
#ifdef PMU_IOC_GET_BACKLIGHT
# undef PMU_IOC_GET_BACKLIGHT
# define PMU_IOC_GET_BACKLIGHT 0x80044201
#endif
#ifdef PMU_IOC_GET_MODEL
# undef PMU_IOC_GET_MODEL
# define PMU_IOC_GET_MODEL 0x80044203
#endif
#ifdef PMU_IOC_GRAB_BACKLIGHT
# undef PMU_IOC_GRAB_BACKLIGHT
# define PMU_IOC_GRAB_BACKLIGHT 0x80044206
#endif
#ifdef PMU_IOC_HAS_ADB
# undef PMU_IOC_HAS_ADB
# define PMU_IOC_HAS_ADB 0x80044204
#endif
#ifdef PMU_IOC_SET_BACKLIGHT
# undef PMU_IOC_SET_BACKLIGHT
# define PMU_IOC_SET_BACKLIGHT 0x40044202
#endif
#ifdef PPPIOCGCOMPRESSORS
# undef PPPIOCGCOMPRESSORS
# define PPPIOCGCOMPRESSORS 0x80207486
#endif
#ifdef PPPIOCSACTIVE
# undef PPPIOCSACTIVE
# define PPPIOCSACTIVE 0x40087446
#endif
#ifdef PPPIOCSCOMPRESS
# undef PPPIOCSCOMPRESS
# define PPPIOCSCOMPRESS 0x400c744d
#endif
#ifdef PPPIOCSPASS
# undef PPPIOCSPASS
# define PPPIOCSPASS 0x40087447
#endif
#ifdef PPPOEIOCSFWD
# undef PPPOEIOCSFWD
# define PPPOEIOCSFWD 0x4004b100
#endif
#ifdef PPS_FETCH
# undef PPS_FETCH
# define PPS_FETCH 0xc00470a4
#endif
#ifdef PPS_GETCAP
# undef PPS_GETCAP
# define PPS_GETCAP 0x800470a3
#endif
#ifdef PPS_GETPARAMS
# undef PPS_GETPARAMS
# define PPS_GETPARAMS 0x800470a1
#endif
#ifdef PPS_KC_BIND
# undef PPS_KC_BIND
# define PPS_KC_BIND 0x400470a5
#endif
#ifdef PPS_SETPARAMS
# undef PPS_SETPARAMS
# define PPS_SETPARAMS 0x400470a2
#endif
#ifdef REISERFS_IOC_UNPACK
# undef REISERFS_IOC_UNPACK
# define REISERFS_IOC_UNPACK 0x4004cd01
#endif
#ifdef RTC_EPOCH_READ
# undef RTC_EPOCH_READ
# define RTC_EPOCH_READ 0x8004700d
#endif
#ifdef RTC_EPOCH_SET
# undef RTC_EPOCH_SET
# define RTC_EPOCH_SET 0x4004700e
#endif
#ifdef RTC_IRQP_READ
# undef RTC_IRQP_READ
# define RTC_IRQP_READ 0x8004700b
#endif
#ifdef RTC_IRQP_SET
# undef RTC_IRQP_SET
# define RTC_IRQP_SET 0x4004700c
#endif
#ifdef RTC_PLL_GET
# undef RTC_PLL_GET
# define RTC_PLL_GET 0x801c7011
#endif
#ifdef RTC_PLL_SET
# undef RTC_PLL_SET
# define RTC_PLL_SET 0x401c7012
#endif
#ifdef SNDCTL_DSP_MAPINBUF
# undef SNDCTL_DSP_MAPINBUF
# define SNDCTL_DSP_MAPINBUF 0x80085013
#endif
#ifdef SNDCTL_DSP_MAPOUTBUF
# undef SNDCTL_DSP_MAPOUTBUF
# define SNDCTL_DSP_MAPOUTBUF 0x80085014
#endif
#ifdef SNDRV_CTL_IOCTL_ELEM_LIST
# undef SNDRV_CTL_IOCTL_ELEM_LIST
# define SNDRV_CTL_IOCTL_ELEM_LIST 0xc0485510
#endif
#ifdef SNDRV_CTL_IOCTL_ELEM_READ
# undef SNDRV_CTL_IOCTL_ELEM_READ
# define SNDRV_CTL_IOCTL_ELEM_READ 0xc2c85512
#endif
#ifdef SNDRV_CTL_IOCTL_ELEM_WRITE
# undef SNDRV_CTL_IOCTL_ELEM_WRITE
# define SNDRV_CTL_IOCTL_ELEM_WRITE 0xc2c85513
#endif
#ifdef SNDRV_EMU10K1_IOCTL_CODE_PEEK
# undef SNDRV_EMU10K1_IOCTL_CODE_PEEK
# define SNDRV_EMU10K1_IOCTL_CODE_PEEK 0xc18c4812
#endif
#ifdef SNDRV_EMU10K1_IOCTL_CODE_POKE
# undef SNDRV_EMU10K1_IOCTL_CODE_POKE
# define SNDRV_EMU10K1_IOCTL_CODE_POKE 0x418c4811
#endif
#ifdef SNDRV_EMU10K1_IOCTL_TRAM_PEEK
# undef SNDRV_EMU10K1_IOCTL_TRAM_PEEK
# define SNDRV_EMU10K1_IOCTL_TRAM_PEEK 0xc00c4822
#endif
#ifdef SNDRV_EMU10K1_IOCTL_TRAM_POKE
# undef SNDRV_EMU10K1_IOCTL_TRAM_POKE
# define SNDRV_EMU10K1_IOCTL_TRAM_POKE 0x400c4821
#endif
#ifdef SNDRV_HDSP_IOCTL_UPLOAD_FIRMWARE
# undef SNDRV_HDSP_IOCTL_UPLOAD_FIRMWARE
# define SNDRV_HDSP_IOCTL_UPLOAD_FIRMWARE 0x40044842
#endif
#ifdef SNDRV_HDSPM_IOCTL_GET_MIXER
# undef SNDRV_HDSPM_IOCTL_GET_MIXER
# define SNDRV_HDSPM_IOCTL_GET_MIXER 0x80044844
#endif
#ifdef SNDRV_HWDEP_IOCTL_DSP_LOAD
# undef SNDRV_HWDEP_IOCTL_DSP_LOAD
# define SNDRV_HWDEP_IOCTL_DSP_LOAD 0x40504803
#endif
#ifdef SNDRV_PCM_IOCTL_DELAY
# undef SNDRV_PCM_IOCTL_DELAY
# define SNDRV_PCM_IOCTL_DELAY 0x80044121
#endif
#ifdef SNDRV_PCM_IOCTL_FORWARD
# undef SNDRV_PCM_IOCTL_FORWARD
# define SNDRV_PCM_IOCTL_FORWARD 0x40044149
#endif
#ifdef SNDRV_PCM_IOCTL_HW_PARAMS
# undef SNDRV_PCM_IOCTL_HW_PARAMS
# define SNDRV_PCM_IOCTL_HW_PARAMS 0xc25c4111
#endif
#ifdef SNDRV_PCM_IOCTL_HW_REFINE
# undef SNDRV_PCM_IOCTL_HW_REFINE
# define SNDRV_PCM_IOCTL_HW_REFINE 0xc25c4110
#endif
#ifdef SNDRV_PCM_IOCTL_READI_FRAMES
# undef SNDRV_PCM_IOCTL_READI_FRAMES
# define SNDRV_PCM_IOCTL_READI_FRAMES 0x800c4151
#endif
#ifdef SNDRV_PCM_IOCTL_READN_FRAMES
# undef SNDRV_PCM_IOCTL_READN_FRAMES
# define SNDRV_PCM_IOCTL_READN_FRAMES 0x800c4153
#endif
#ifdef SNDRV_PCM_IOCTL_REWIND
# undef SNDRV_PCM_IOCTL_REWIND
# define SNDRV_PCM_IOCTL_REWIND 0x40044146
#endif
#ifdef SNDRV_PCM_IOCTL_STATUS
# undef SNDRV_PCM_IOCTL_STATUS
# define SNDRV_PCM_IOCTL_STATUS 0x80804120
#endif
#ifdef SNDRV_PCM_IOCTL_STATUS_EXT
# undef SNDRV_PCM_IOCTL_STATUS_EXT
# define SNDRV_PCM_IOCTL_STATUS_EXT 0xc0804124
#endif
#ifdef SNDRV_PCM_IOCTL_SW_PARAMS
# undef SNDRV_PCM_IOCTL_SW_PARAMS
# define SNDRV_PCM_IOCTL_SW_PARAMS 0xc0684113
#endif
#ifdef SNDRV_PCM_IOCTL_WRITEI_FRAMES
# undef SNDRV_PCM_IOCTL_WRITEI_FRAMES
# define SNDRV_PCM_IOCTL_WRITEI_FRAMES 0x400c4150
#endif
#ifdef SNDRV_PCM_IOCTL_WRITEN_FRAMES
# undef SNDRV_PCM_IOCTL_WRITEN_FRAMES
# define SNDRV_PCM_IOCTL_WRITEN_FRAMES 0x400c4152
#endif
#ifdef SNDRV_RAWMIDI_IOCTL_PARAMS
# undef SNDRV_RAWMIDI_IOCTL_PARAMS
# define SNDRV_RAWMIDI_IOCTL_PARAMS 0xc0205710
#endif
#ifdef SNDRV_RAWMIDI_IOCTL_STATUS
# undef SNDRV_RAWMIDI_IOCTL_STATUS
# define SNDRV_RAWMIDI_IOCTL_STATUS 0xc0305720
#endif
#ifdef SNDRV_SEQ_IOCTL_CREATE_PORT
# undef SNDRV_SEQ_IOCTL_CREATE_PORT
# define SNDRV_SEQ_IOCTL_CREATE_PORT 0xc0a45320
#endif
#ifdef SNDRV_SEQ_IOCTL_DELETE_PORT
# undef SNDRV_SEQ_IOCTL_DELETE_PORT
# define SNDRV_SEQ_IOCTL_DELETE_PORT 0x40a45321
#endif
#ifdef SNDRV_SEQ_IOCTL_GET_PORT_INFO
# undef SNDRV_SEQ_IOCTL_GET_PORT_INFO
# define SNDRV_SEQ_IOCTL_GET_PORT_INFO 0xc0a45322
#endif
#ifdef SNDRV_SEQ_IOCTL_QUERY_NEXT_PORT
# undef SNDRV_SEQ_IOCTL_QUERY_NEXT_PORT
# define SNDRV_SEQ_IOCTL_QUERY_NEXT_PORT 0xc0a45352
#endif
#ifdef SNDRV_SEQ_IOCTL_SET_PORT_INFO
# undef SNDRV_SEQ_IOCTL_SET_PORT_INFO
# define SNDRV_SEQ_IOCTL_SET_PORT_INFO 0x40a45323
#endif
#ifdef SNDRV_TIMER_IOCTL_GINFO
# undef SNDRV_TIMER_IOCTL_GINFO
# define SNDRV_TIMER_IOCTL_GINFO 0xc0e05403
#endif
#ifdef SNDRV_TIMER_IOCTL_GPARAMS
# undef SNDRV_TIMER_IOCTL_GPARAMS
# define SNDRV_TIMER_IOCTL_GPARAMS 0x403c5404
#endif
#ifdef SNDRV_TIMER_IOCTL_GSTATUS
# undef SNDRV_TIMER_IOCTL_GSTATUS
# define SNDRV_TIMER_IOCTL_GSTATUS 0xc0405405
#endif
#ifdef SNDRV_TIMER_IOCTL_INFO
# undef SNDRV_TIMER_IOCTL_INFO
# define SNDRV_TIMER_IOCTL_INFO 0x80e05411
#endif
#ifdef SPIOCSTYPE
# undef SPIOCSTYPE
# define SPIOCSTYPE 0x40047101
#endif
#ifdef TUNATTACHFILTER
# undef TUNATTACHFILTER
# define TUNATTACHFILTER 0x400854d5
#endif
#ifdef TUNDETACHFILTER
# undef TUNDETACHFILTER
# define TUNDETACHFILTER 0x400854d6
#endif
#ifdef TUNER_SET_CONFIG
# undef TUNER_SET_CONFIG
# define TUNER_SET_CONFIG 0x4008645c
#endif
#ifdef TUNGETFILTER
# undef TUNGETFILTER
# define TUNGETFILTER 0x800854db
#endif
#ifdef UDF_GETEABLOCK
# undef UDF_GETEABLOCK
# define UDF_GETEABLOCK 0x80046c41
#endif
#ifdef UDF_GETVOLIDENT
# undef UDF_GETVOLIDENT
# define UDF_GETVOLIDENT 0x80046c42
#endif
#ifdef UDF_RELOCATE_BLOCKS
# undef UDF_RELOCATE_BLOCKS
# define UDF_RELOCATE_BLOCKS 0xc0046c43
#endif
#ifdef UI_BEGIN_FF_UPLOAD
# undef UI_BEGIN_FF_UPLOAD
# define UI_BEGIN_FF_UPLOAD 0xc06055c8
#endif
#ifdef UI_END_FF_UPLOAD
# undef UI_END_FF_UPLOAD
# define UI_END_FF_UPLOAD 0x406055c9
#endif
#ifdef UI_SET_PHYS
# undef UI_SET_PHYS
# define UI_SET_PHYS 0x4004556c
#endif
#ifdef USBDEVFS_BULK
# undef USBDEVFS_BULK
# define USBDEVFS_BULK 0xc0105502
#endif
#ifdef USBDEVFS_CONTROL
# undef USBDEVFS_CONTROL
# define USBDEVFS_CONTROL 0xc0105500
#endif
#ifdef USBDEVFS_DISCSIGNAL
# undef USBDEVFS_DISCSIGNAL
# define USBDEVFS_DISCSIGNAL 0x8008550e
#endif
#ifdef USBDEVFS_IOCTL
# undef USBDEVFS_IOCTL
# define USBDEVFS_IOCTL 0xc00c5512
#endif
#ifdef USBDEVFS_REAPURB
# undef USBDEVFS_REAPURB
# define USBDEVFS_REAPURB 0x4004550c
#endif
#ifdef USBDEVFS_REAPURBNDELAY
# undef USBDEVFS_REAPURBNDELAY
# define USBDEVFS_REAPURBNDELAY 0x4004550d
#endif
#ifdef USBDEVFS_SUBMITURB
# undef USBDEVFS_SUBMITURB
# define USBDEVFS_SUBMITURB 0x802c550a
#endif
#ifdef UVCIOC_CTRL_MAP
# undef UVCIOC_CTRL_MAP
# define UVCIOC_CTRL_MAP 0xc0587520
#endif
#ifdef UVCIOC_CTRL_QUERY
# undef UVCIOC_CTRL_QUERY
# define UVCIOC_CTRL_QUERY 0xc00c7521
#endif
#ifdef VIDEO_GET_EVENT
# undef VIDEO_GET_EVENT
# define VIDEO_GET_EVENT 0x80146f1c
#endif
#ifdef VIDEO_STILLPICTURE
# undef VIDEO_STILLPICTURE
# define VIDEO_STILLPICTURE 0x40086f1e
#endif
#ifdef VIDIOC_AM437X_CCDC_CFG
# undef VIDIOC_AM437X_CCDC_CFG
# define VIDIOC_AM437X_CCDC_CFG 0x400456c1
#endif
#ifdef VIDIOC_CREATE_BUFS
# undef VIDIOC_CREATE_BUFS
# define VIDIOC_CREATE_BUFS 0xc0f8565c
#endif
#ifdef VIDIOC_DQBUF
# undef VIDIOC_DQBUF
# define VIDIOC_DQBUF 0xc0505611
#endif
#ifdef VIDIOC_G_EDID
# undef VIDIOC_G_EDID
# define VIDIOC_G_EDID 0xc0245628
#endif
#ifdef VIDIOC_G_EXT_CTRLS
# undef VIDIOC_G_EXT_CTRLS
# define VIDIOC_G_EXT_CTRLS 0xc0185647
#endif
#ifdef VIDIOC_G_FBUF
# undef VIDIOC_G_FBUF
# define VIDIOC_G_FBUF 0x802c560a
#endif
#ifdef VIDIOC_G_FMT
# undef VIDIOC_G_FMT
# define VIDIOC_G_FMT 0xc0cc5604
#endif
#ifdef VIDIOC_OMAP3ISP_CCDC_CFG
# undef VIDIOC_OMAP3ISP_CCDC_CFG
# define VIDIOC_OMAP3ISP_CCDC_CFG 0xc02056c1
#endif
#ifdef VIDIOC_OMAP3ISP_PRV_CFG
# undef VIDIOC_OMAP3ISP_PRV_CFG
# define VIDIOC_OMAP3ISP_PRV_CFG 0xc03c56c2
#endif
#ifdef VIDIOC_OMAP3ISP_STAT_EN
# undef VIDIOC_OMAP3ISP_STAT_EN
# define VIDIOC_OMAP3ISP_STAT_EN 0xc00456c7
#endif
#ifdef VIDIOC_OMAP3ISP_STAT_REQ
# undef VIDIOC_OMAP3ISP_STAT_REQ
# define VIDIOC_OMAP3ISP_STAT_REQ 0xc02056c6
#endif
#ifdef VIDIOC_PREPARE_BUF
# undef VIDIOC_PREPARE_BUF
# define VIDIOC_PREPARE_BUF 0xc050565d
#endif
#ifdef VIDIOC_QBUF
# undef VIDIOC_QBUF
# define VIDIOC_QBUF 0xc050560f
#endif
#ifdef VIDIOC_QUERYBUF
# undef VIDIOC_QUERYBUF
# define VIDIOC_QUERYBUF 0xc0505609
#endif
#ifdef VIDIOC_S_EDID
# undef VIDIOC_S_EDID
# define VIDIOC_S_EDID 0xc0245629
#endif
#ifdef VIDIOC_S_EXT_CTRLS
# undef VIDIOC_S_EXT_CTRLS
# define VIDIOC_S_EXT_CTRLS 0xc0185648
#endif
#ifdef VIDIOC_S_FBUF
# undef VIDIOC_S_FBUF
# define VIDIOC_S_FBUF 0x402c560b
#endif
#ifdef VIDIOC_S_FMT
# undef VIDIOC_S_FMT
# define VIDIOC_S_FMT 0xc0cc5605
#endif
#ifdef VIDIOC_TRY_EXT_CTRLS
# undef VIDIOC_TRY_EXT_CTRLS
# define VIDIOC_TRY_EXT_CTRLS 0xc0185649
#endif
#ifdef VIDIOC_TRY_FMT
# undef VIDIOC_TRY_FMT
# define VIDIOC_TRY_FMT 0xc0cc5640
#endif
#ifdef ZATM_GETPOOL
# undef ZATM_GETPOOL
# define ZATM_GETPOOL 0x400c6161
#endif
#ifdef ZATM_GETPOOLZ
# undef ZATM_GETPOOLZ
# define ZATM_GETPOOLZ 0x400c6162
#endif
#ifdef ZATM_SETPOOL
# undef ZATM_SETPOOL
# define ZATM_SETPOOL 0x400c6163
#endif
