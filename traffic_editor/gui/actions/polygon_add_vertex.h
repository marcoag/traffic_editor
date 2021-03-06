/*
 * Copyright (C) 2019-2020 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#ifndef _POLYGON_ADD_H_
#define _POLYGON_ADD_H_

#include <QUndoCommand>
#include "editor_mode_id.h"
#include "project.h"

class PolygonAddVertCommand : public QUndoCommand
{

public:
  PolygonAddVertCommand(
    Polygon* polygon,
    int position,
    int vert_id);
  virtual ~PolygonAddVertCommand();
  void undo() override;
  void redo() override;
private:
  Polygon* _polygon;
  int _vert_id;
  int _position;
  std::vector<int> _old_vertices;
};

#endif