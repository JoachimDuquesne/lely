project('lely-core','c')


inc_dir = include_directories([
	'./include',
	'./src',
])


src_files = []
src_files += files([
	'./src/can/buf.c',
	'./src/can/msg.c',
	'./src/can/net.c',
	'./src/can/can.h',
	#'./src/can/socket.c',	# if HAVE_SOCKET_CAN
	#'./src/can/vci.c',	# if HAVE_VCI

	'./src/co/csdo.c',
	'./src/co/dev.c',
	'./src/co/gw.c',
	'./src/co/lss.c',
	'./src/co/nmt_boot.c',
	'./src/co/nmt.c',
	'./src/co/rpdo.c',
	'./src/co/sdo.c',
	'./src/co/ssdo.c',
	'./src/co/time.c',
	'./src/co/type.c',
	'./src/co/crc.c',
	'./src/co/dcf.c',
	'./src/co/emcy.c',
	'./src/co/gw_txt.c',
	'./src/co/nmt_cfg.c',
	'./src/co/nmt_hb.c',
	'./src/co/nmt_srv.c',
	'./src/co/obj.c',
	'./src/co/pdo.c',
	'./src/co/sdev.c',
	'./src/co/sync.c',
	'./src/co/tpdo.c',
	'./src/co/val.c',
	'./src/co/wtm.c',
	'./src/co/co.h',
	'./src/co/nmt_boot.h',
	'./src/co/nmt_cfg.h',
	'./src/co/nmt_hb.h',
	'./src/co/nmt_srv.h',
	'./src/co/obj.h',
	'./src/co/sdo.h',

	'./src/ev/ev.h',
	'./src/ev/exec.c',
	'./src/ev/fiber_exec.c',
	'./src/ev/future.c',
	'./src/ev/loop.c',
	'./src/ev/poll.c',
	'./src/ev/std_exec.c',
	'./src/ev/strand.c',
	'./src/ev/task.c',
	'./src/ev/thrd_loop.c',

	'./src/io/addr.c',
	'./src/io/attr.c',
	'./src/io/attr.h',
	'./src/io/default.h',
	'./src/io/handle.h',
	'./src/io/io.h',
	'./src/io/can.c',
	'./src/io/file.c',
	'./src/io/handle.c',
	'./src/io/if.c',
	'./src/io/io.c',
	'./src/io/pipe.c',
	'./src/io/poll.c',
	'./src/io/rtnl.c',		# if PLATFORM_LINUX
	'./src/io/rtnl.h',		# if PLATFORM_LINUX
	'./src/io/serial.c',	
	'./src/io/sock.c',

	'./src/io2/can.c',
	'./src/io2/can.h',
	'./src/io2/io2.h',
	'./src/io2/sigset.h',
	'./src/io2/timer.h',
	'./src/io2/can_net.c',
	'./src/io2/can_rt.c',
	'./src/io2/clock.c',
	'./src/io2/ctx.c',
	'./src/io2/dev.c',
	'./src/io2/sigset.c',
	'./src/io2/timer.c',
	'./src/io2/tqueue.c',
	'./src/io2/vcan.c',
	'./src/io2/can/msg.c',
	'./src/io2/linux/can_chan.c',	# if PLATFORM_LINUX
	'./src/io2/linux/can_ctrl.c',	# if PLATFORM_LINUX
	'./src/io2/linux/poll.c',	# if PLATFORM_LINUX
	'./src/io2/linux/can_attr.h',	# if PLATFORM_LINUX
	'./src/io2/linux/can_err.h',	# if PLATFORM_LINUX
	'./src/io2/linux/can_msg.h',	# if PLATFORM_LINUX
	'./src/io2/linux/if.h',		# if PLATFORM_LINUX
	'./src/io2/linux/ifreq.h',	# if PLATFORM_LINUX
	'./src/io2/linux/io.h',		# if PLATFORM_LINUX
	'./src/io2/linux/rtnl.h',	# if PLATFORM_LINUX
	'./src/io2/linux/timer.c',	# if PLATFORM_LINUX
	'./src/io2/posix/fd.c',		# if PLATFORM_POSIX
	'./src/io2/posix/io.c',		# if PLATFORM_POSIX
	'./src/io2/posix/poll.c',	# if PLATFORM_POSIX & PLATFORM_LINUX
	'./src/io2/posix/sigset.c',	# if PLATFORM_POSIX
	'./src/io2/posix/timer.c',	# if PLATFORM_POSIX & PLATFORM_LINUX
	'./src/io2/posix/fd.h',		# if PLATFORM_POSIX
	'./src/io2/posix/io.h',		# if PLATFORM_POSIX
	'./src/io2/sys/clock.c',
	'./src/io2/user/can.c',
	'./src/io2/user/timer.c',

	'./src/libc/clock.c',
	'./src/libc/getopt.c',
	'./src/libc/libc.h',
	'./src/libc/sleep.c',
	'./src/libc/stdatomic.c',
	'./src/libc/stdio.c',
	'./src/libc/stdlib.c',
	'./src/libc/string.c',
	'./src/libc/strings.c',
	#'./src/libc/threads-pthread.c',	# if !NO_THREADS & HAVE_PTHREAD
	'./src/libc/time.c',

	'./src/tap/tap.c',
	'./src/tap/tap.h',

	'./src/util/bimap.c',
	'./src/util/bitset.c',
	'./src/util/config.c',
	#'./src/util/daemon.c',		# if !NO_DAEMON
	'./src/util/dllist.c',
	'./src/util/errnum.c',
	'./src/util/fwbuf.c',
	'./src/util/mkjmp.c',
	'./src/util/print.c',
	'./src/util/sllist.c',
	'./src/util/time.c',
	'./src/util/bits.c',
	'./src/util/cmp.c',
	'./src/util/config_ini.c',
	'./src/util/diag.c',
	'./src/util/endian.c',
	'./src/util/fiber-sjlj.c',
	'./src/util/frbuf.c',
	'./src/util/lex.c',
	'./src/util/membuf.c',
	'./src/util/pheap.c',
	'./src/util/rbtree.c',
	'./src/util/spscring.c',
	'./src/util/fiber.h',
	'./src/util/util.h',
])

cc = meson.get_compiler('c')
cdata = configuration_data()
check_headers = [
  ['HAVE_BLUETOOTH_BLUETOOTH_H', 'bluetooth/bluetooth.h'],
  ['HAVE_BLUETOOTH_RFCOMM_H', 'bluetooth/rfcomm.h'],
  ['HAVE_CANTYPE_H', 'cantype.h'],
  ['HAVE_DLFCN_H', 'dlfcn.h'],
  ['HAVE_IFADDRS_H', 'ifaddrs.h'],
  ['HAVE_INTTYPES_H', 'inttypes.h'],
  ['HAVE_LINUX_CAN_ERROR_H', 'linux/can/error.h'],
  ['HAVE_LINUX_CAN_H', 'linux/can.h'],
  ['HAVE_LINUX_CAN_NETLINK_H', 'linux/can/netlink.h'],
  ['HAVE_LINUX_CAN_RAW_H', 'linux/can/raw.h'],
  ['HAVE_LINUX_RTNETLINK_H', 'linux/rtnetlink.h'],
  ['HAVE_MEMORY_H', 'memory.h'],
  ['HAVE_STDINT_H', 'stdint.h'],
  ['HAVE_STDLIB_H', 'stdlib.h'],
  ['HAVE_STRINGS_H', 'strings.h'],
  ['HAVE_STRING_H', 'string.h'],
  ['HAVE_SYS_EPOLL_H', 'sys/epoll.h'],
  ['HAVE_SYS_IOCTL_H', 'sys/ioctl.h'],
  ['HAVE_SYS_STAT_H', 'sys/stat.h'],
  ['HAVE_SYS_TYPES_H', 'sys/types.h'],
  ['HAVE_UNISTD_H', 'unistd.h'],
]

foreach h : check_headers
  if cc.has_header(h.get(1))
    cdata.set(h.get(0), 1)
  endif
endforeach

check_functions = [
# check token ['HAVE_CAN_RAW_FD_FRAMES']
# check token ['HAVE_CXX11']
# check token ['HAVE_PTHREAD_PRIO_INHERIT']
]

foreach f : check_functions
  if cc.has_function(f.get(1), prefix : f.get(2))
    cdata.set(f.get(0), 1)
  endif
endforeach

cdata.set('LELY_NO_DAEMON',1)
cdata.set('LELY_NO_THREADS',1)
cdata.set('LELY_NO_CXX',1)
#cdata.set('',0)
#cdata.set('',1)

configure_file(input : 'config.h.meson',
  output : 'config.h',
  configuration : cdata)


dependencies = []


CFLAGS = []
CFLAGS += '-D__NEWLIB__'
CFLAGS += '-Wall'
CFLAGS += '-Wextra'
CFLAGS += '-fno-builtin'
CFLAGS += '-pedantic'
CFLAGS += '-D__linux__=0'
CFLAGS += '-DNO_TOOLS=1'
CFLAGS += '-DNO_TESTS=1'
CFLAGS += '-DWITH_PYTHON=0'
CFLAGS += '-DNO_THREADS=1'
CFLAGS += '-DNO_DAEMON=1'
CFLAGS += '-DENABLE_SHARED=0'
#CFLAGS += '-D_POSIX_MAPPED_FILES=0'


LDFLAGS  = []
LDFLAGS += '--specs=nosys.specs'

lelycore_lib = static_library('lely-core',
	include_directories : inc_dir,
	sources : src_files,
	dependencies : dependencies,
	c_args : CFLAGS,
	link_args : LDFLAGS,
)

lelycore_dep = declare_dependency(
	include_directories : inc_dir,
	link_with : lelycore_lib,
	compile_args : CFLAGS,
	link_args : LDFLAGS,
)

