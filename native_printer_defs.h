/* Generated by Makefile from block.c.mpers.i btrfs.c.mpers.i dirent.c.mpers.i evdev_mpers.c.mpers.i fetch_bpf_fprog.c.mpers.i fetch_struct_flock.c.mpers.i fetch_struct_keyctl_kdf_params.c.mpers.i fetch_struct_mmsghdr.c.mpers.i fetch_struct_msghdr.c.mpers.i fetch_struct_stat.c.mpers.i fetch_struct_stat64.c.mpers.i fetch_struct_statfs.c.mpers.i fetch_struct_xfs_quotastat.c.mpers.i hdio.c.mpers.i ipc_msgctl.c.mpers.i ipc_shmctl.c.mpers.i loop.c.mpers.i mtd.c.mpers.i perf_ioctl.c.mpers.i print_aio_sigset.c.mpers.i print_group_req.c.mpers.i print_mq_attr.c.mpers.i print_msgbuf.c.mpers.i print_sg_req_info.c.mpers.i print_sigevent.c.mpers.i print_time.c.mpers.i print_timespec.c.mpers.i print_timeval.c.mpers.i print_timex.c.mpers.i printrusage.c.mpers.i printsiginfo.c.mpers.i rt_sigreturn.c.mpers.i rtc.c.mpers.i sg_io_v3.c.mpers.i sigaltstack.c.mpers.i sock.c.mpers.i sysinfo.c.mpers.i times.c.mpers.i ustat.c.mpers.i utime.c.mpers.i v4l2.c.mpers.i; do not edit. */
.block_ioctl = block_ioctl,
.btrfs_ioctl = btrfs_ioctl,
.evdev_write_ioctl_mpers = evdev_write_ioctl_mpers,
.get_sock_fprog_size = get_sock_fprog_size,
.fetch_bpf_fprog = fetch_bpf_fprog,
.fetch_struct_flock = fetch_struct_flock,
.fetch_struct_flock64 = fetch_struct_flock64,
.fetch_keyctl_kdf_params = fetch_keyctl_kdf_params,
.fetch_struct_mmsghdr = fetch_struct_mmsghdr,
.sizeof_struct_mmsghdr = sizeof_struct_mmsghdr,
.fetch_struct_msghdr = fetch_struct_msghdr,
.fetch_struct_stat = fetch_struct_stat,
.fetch_struct_stat64 = fetch_struct_stat64,
.fetch_struct_statfs = fetch_struct_statfs,
.fetch_struct_statfs64 = fetch_struct_statfs64,
.fetch_struct_quotastat = fetch_struct_quotastat,
.hdio_ioctl = hdio_ioctl,
.loop_ioctl = loop_ioctl,
.mtd_ioctl = mtd_ioctl,
.perf_ioctl = perf_ioctl,
.print_aio_sigset = print_aio_sigset,
.print_group_req = print_group_req,
.printmqattr = printmqattr,
.tprint_msgbuf = tprint_msgbuf,
.decode_sg_req_info = decode_sg_req_info,
.print_sigevent = print_sigevent,
.print_struct_timespec_data_size = print_struct_timespec_data_size,
.print_struct_timespec_array_data_size = print_struct_timespec_array_data_size,
.print_timespec = print_timespec,
.sprint_timespec = sprint_timespec,
.print_timespec_utime_pair = print_timespec_utime_pair,
.print_itimerspec = print_itimerspec,
.print_struct_timeval = print_struct_timeval,
.print_struct_timeval_data_size = print_struct_timeval_data_size,
.print_timeval = print_timeval,
.print_timeval_utimes = print_timeval_utimes,
.sprint_timeval = sprint_timeval,
.print_itimerval = print_itimerval,
.print_timex = print_timex,
.printrusage = printrusage,
.printsiginfo_at = printsiginfo_at,
.print_siginfo_array = print_siginfo_array,
.rtc_ioctl = rtc_ioctl,
.decode_sg_io_v3 = decode_sg_io_v3,
.sock_ioctl = sock_ioctl,
.v4l2_ioctl = v4l2_ioctl,
