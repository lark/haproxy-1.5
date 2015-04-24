/*
 * include/types/ss_sock.h
 *
 * Copyright (C) 2015 Wang Jian <larkwang@gmail.com>
 *
 * Some code based on https://github.com/shadowsocks/shadowsocks-libev
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, version 2.1
 * exclusively.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef _TYPES_SS_SOCK_H
#define _TYPES_SS_SOCK_H

#include <openssl/ssl.h>

#define MAX_KEY_LENGTH	EVP_MAX_KEY_LENGTH
#define MAX_IV_LENGTH	EVP_MAX_IV_LENGTH
#define MAX_MD_SIZE	EVP_MAX_MD_SIZE

#endif /* _TYPES_SS_SOCK_H */
