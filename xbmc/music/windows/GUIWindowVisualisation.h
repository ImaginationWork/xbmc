/*
 *      Copyright (C) 2005-2013 Team XBMC
 *      http://kodi.tv
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

#include "guilib/GUIWindow.h"
#include "music/tags/MusicInfoTag.h"
#include "utils/Stopwatch.h"

class CGUIWindowVisualisation :
      public CGUIWindow
{
public:
  CGUIWindowVisualisation(void);
  bool OnMessage(CGUIMessage& message) override;
  bool OnAction(const CAction &action) override;
  void FrameMove() override;
protected:
  EVENT_RESULT OnMouseEvent(const CPoint &point, const CMouseEvent &event) override;

  CStopWatch m_initTimer;
  CStopWatch m_lockedTimer;
  bool m_bShowPreset;
  MUSIC_INFO::CMusicInfoTag m_tag;    // current tag info, for finding when the info manager updates
};

