// SPDX-License-Identifier: GPL-3.0-only
/*
 *  Prism Launcher - Minecraft Launcher
 *  Copyright (C) 2024 Tayou <git@tayou.org>
 *  Copyright (C) 2024 TheKodeToad <TheKodeToad@proton.me>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, version 3.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * This file incorporates work covered by the following copyright and
 * permission notice:
 *
 *      Copyright 2013-2021 MultiMC Contributors
 *
 *      Licensed under the Apache License, Version 2.0 (the "License");
 *      you may not use this file except in compliance with the License.
 *      You may obtain a copy of the License at
 *
 *          http://www.apache.org/licenses/LICENSE-2.0
 *
 *      Unless required by applicable law or agreed to in writing, software
 *      distributed under the License is distributed on an "AS IS" BASIS,
 *      WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *      See the License for the specific language governing permissions and
 *      limitations under the License.
 */
#include "DarkTheme.h"

#include <QObject>

QString DarkTheme::id()
{
    return "dark";
}

QString DarkTheme::name()
{
    return QObject::tr("Rabbit Dark");
}

QPalette DarkTheme::colorScheme()
{
    QPalette darkPalette;
    darkPalette.setColor(QPalette::Window, QColor(45, 42, 38)); 
    darkPalette.setColor(QPalette::WindowText, QColor(238, 232, 213)); 
    darkPalette.setColor(QPalette::Base, QColor(35, 32, 28)); 
    darkPalette.setColor(QPalette::AlternateBase, QColor(39, 36, 32)); 
    darkPalette.setColor(QPalette::ToolTipBase, QColor(234, 224, 200)); 
    darkPalette.setColor(QPalette::ToolTipText, QColor(45, 42, 38)); 
    darkPalette.setColor(QPalette::Text, QColor(238, 232, 213)); 
    darkPalette.setColor(QPalette::Button, QColor(50, 47, 43)); 
    darkPalette.setColor(QPalette::ButtonText, QColor(238, 232, 213));
    darkPalette.setColor(QPalette::BrightText, QColor(214, 137, 16)); 
    darkPalette.setColor(QPalette::Link, QColor(100, 179, 116)); 
    darkPalette.setColor(QPalette::Highlight, QColor(184, 139, 74)); 
    darkPalette.setColor(QPalette::HighlightedText, QColor(35, 32, 28)); 
    darkPalette.setColor(QPalette::PlaceholderText, QColor(128, 117, 107)); 
    return fadeInactive(darkPalette, fadeAmount(), fadeColor());
}

double DarkTheme::fadeAmount()
{
    return 0.4;
}

QColor DarkTheme::fadeColor()
{
    return QColor(45, 42, 38); 
}

bool DarkTheme::hasStyleSheet()
{
    return true;
}

QString DarkTheme::appStyleSheet()
{
    return "QToolTip { color: #2D2A26; background-color: #EAD8B2; border: 1px solid #665A4E; }"; 
}

QString DarkTheme::tooltip()
{
    return "";
}
