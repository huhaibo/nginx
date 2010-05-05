
/*
 * Copyright (C) Ngwsx
 */


#ifndef _NGX_ERRNO_H_INCLUDED_
#define _NGX_ERRNO_H_INCLUDED_


#include <ngx_config.h>
#include <ngx_core.h>


typedef int               ngx_err_t;


/*
 * ERROR_CANNOT_MAKE
 * ERROR_NOT_OWNER
 */
#define NGX_EPERM         ERROR_CANNOT_MAKE
/*
 * ERROR_FILE_NOT_FOUND
 * ERROR_PATH_NOT_FOUND
 * ERROR_INVALID_NAME
 * ERROR_BAD_PATHNAME
 * ERROR_MOD_NOT_FOUND
 */
#define NGX_ENOENT        ERROR_FILE_NOT_FOUND
#define NGX_ENOPATH       ERROR_PATH_NOT_FOUND
#define NGX_ESRCH         ERROR_PROC_NOT_FOUND
/*
 * WSAEINTR
 * ERROR_INVALID_AT_INTERRUPT_TIME
 */
#define NGX_EINTR         WSAEINTR
/*
 * ERROR_WAIT_NO_CHILDREN
 */
#define NGX_ECHILD        ERROR_WAIT_NO_CHILDREN
/*
 * ERROR_NOT_ENOUGH_MEMORY
 * ERROR_OUTOFMEMORY
 */
#define NGX_ENOMEM        ERROR_NOT_ENOUGH_MEMORY
/*
 * ERROR_ACCESS_DENIED
 * ERROR_LOCK_VIOLATION
 */
#define NGX_EACCES        ERROR_ACCESS_DENIED
/*
 * ERROR_BUSY
 * ERROR_CHILD_NOT_COMPLETE
 * ERROR_PIPE_BUSY
 * ERROR_PIPE_CONNECTED
 * ERROR_SHARING_VIOLATION
 * ERROR_SIGNAL_PENDING
 */
#define NGX_EBUSY         ERROR_BUSY
/*
 * ERROR_ALREADY_EXISTS
 * ERROR_FILE_EXISTS
 */
#define NGX_EEXIST        ERROR_ALREADY_EXISTS
/* TODO: xxx */
#define NGX_EXDEV         0
/* ERROR_DIRECTORY */
#define NGX_ENOTDIR       ERROR_DIRECTORY
#define NGX_EISDIR        ERROR_CANNOT_MAKE
/*
 * ERROR_INVALID_PARAMETER
 * WSAEINVAL
 * ERROR_INVALID_DATA
 * ERROR_INVALID_ADDRESS
 * ERROR_SEEK
 * ERROR_NEGATIVE_SEEK
 * ERROR_INVALID_SIGNAL_NUMBER
 * ERROR_BAD_PIPE
 * ERROR_BAD_USERNAME
 * ERROR_META_EXPANSION_TOO_LONG
 * ERROR_NO_TOKEN
 * ERROR_THREAD_1_INACTIVE
 * ERROR_SECTOR_NOT_FOUND
 */
#define NGX_EINVAL        WSAEINVAL
/* ERROR_DISK_FULL, ERROR_HANDLE_DISK_FULL, ERROR_END_OF_MEDIA */
#define NGX_ENOSPC        ERROR_DISK_FULL
/* ERROR_BROKEN_PIPE, ERROR_NO_DATA */
#define NGX_EPIPE         ERROR_BROKEN_PIPE
/*
 * WSAEWOULDBLOCK
 * ERROR_IO_PENDING
 * ERROR_OPEN_FILES
 * ERROR_DEVICE_IN_USE
 * ERROR_NO_SYSTEM_RESOURCES
 * ERROR_COMMITMENT_LIMIT
 * ERROR_MAX_THRDS_REACHED
 * ERROR_NONPAGED_SYSTEM_RESOURCES
 * ERROR_PAGED_SYSTEM_RESOURCES
 * ERROR_PAGEFILE_QUOTA
 * ERROR_WORKING_SET_QUOTA
 * ERROR_NO_PROC_SLOTS
 * ERROR_ACTIVE_CONNECTIONS
 */
#define NGX_EAGAIN        WSAEWOULDBLOCK
#define NGX_EINPROGRESS   WSAEINPROGRESS
#define NGX_EADDRINUSE    WSAEADDRINUSE
#define NGX_ECONNABORTED  WSAECONNABORTED
#define NGX_ECONNRESET    WSAECONNRESET
#define NGX_ENOTCONN      WSAENOTCONN
#define NGX_ETIMEDOUT     WSAETIMEDOUT
#define NGX_ECONNREFUSED  WSAECONNREFUSED
/* ERROR_FILENAME_EXCED_RANGE, WSAENAMETOOLONG */
#define NGX_ENAMETOOLONG  ERROR_FILENAME_EXCED_RANGE
#define NGX_ENETDOWN      WSAENETDOWN
#define NGX_ENETUNREACH   WSAENETUNREACH
#define NGX_EHOSTDOWN     WSAEHOSTDOWN
#define NGX_EHOSTUNREACH  WSAEHOSTUNREACH
/* ERROR_CALL_NOT_IMPLEMENTED, ERROR_NOT_SUPPORTED */
#define NGX_ENOSYS        ERROR_CALL_NOT_IMPLEMENTED
#define NGX_ECANCELED     ECANCELED
#define NGX_EILSEQ        EILSEQ
/* ERROR_NO_MORE_FILES, ERROR_NO_MORE_ITEMS */
#define NGX_ENOMOREFILES  ERROR_NO_MORE_FILES


#define ngx_errno                  (int) GetLastError()
#define ngx_socket_errno           WSAGetLastError()
#define ngx_set_errno(err)         SetLastError((DWORD) err)
#define ngx_set_socket_errno(err)  WSASetLastError(err)


u_char *ngx_strerror_r(int err, u_char *errstr, size_t size);


#endif /* _NGX_ERRNO_H_INCLUDED_ */
