/*------------------------------------------------------------------------------
 *! \file   locking.h
 *! \brief  Prevents multiple access to the same index by creating a locking
 *          file, which is removed upon successful exit.
 *
 *  This was originally obtained from https://github.com/technion/lol_dht22, by
 *  technion@lolware.net
 *------------------------------------------------------------------------------
 *                   Kris Dunning ippie52@gmail.com 2016.
 *------------------------------------------------------------------------------
 */
#pragma once

int get_lockfile_name(const int sensor, char *buffer, const int size);
int open_lockfile(const char *filename);
void close_lockfile(const int fd);

