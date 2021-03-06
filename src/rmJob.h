/*
 * lftp - file transfer program
 *
 * Copyright (c) 1996-2011 by Alexander V. Lukyanov (lav@yars.free.net)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef RMJOB_H
#define RMJOB_H

#include "TreatFileJob.h"

class rmJob : public TreatFileJob
{
   void TreatCurrent(const char *, const FileInfo *);

protected:
   FA::open_mode mode;

   bool recurse;

public:
   void	SayFinal();
   void Recurse(); // rm -r
   void Rmdir() { mode=FA::REMOVE_DIR; }

   rmJob(FileAccess *session,ArgV *a);
};

#endif // RMJOB_H
