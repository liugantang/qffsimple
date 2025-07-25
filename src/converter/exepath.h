/*  QWinFF - a qt4 gui frontend for ffmpeg
 *  Copyright (C) 2011-2013 Timothy Lin <lzh9102@gmail.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef EXEPATH_H
#define EXEPATH_H

#include <QString>
#include <QList>

class ExePath
{
public:
    static void setPath(const QString &program, const QString &path);
    static QString getPath(const QString &program);

    /**
     * @brief Check whether the program can be executed.
     * @param program the program to test
     */
    static bool checkProgramAvailability(const QString &program);

    /**
     * Save the paths using QSettings
     */
    static void saveSettings();

    /**
     * Load the paths using QSettings
     */
    static void loadSettings();

    static QList<QString> getPrograms();

private:
    ExePath();
};

#endif // EXEPATH_H
