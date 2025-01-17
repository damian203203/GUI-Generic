/*
  Copyright (C) krycha88

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef SuplaWebCorrection_h
#define SuplaWebCorrection_h

#include "SuplaDeviceGUI.h"

#include <supla/sensor/therm_hygro_meter.h>
#include <vector>

#define PATH_CORRECTION           "correction"
#define INPUT_CORRECTION_TEMP     "ict"
#define INPUT_CORRECTION_HUMIDITY "ich"

void createWebCorrection();
void handleCorrection(int save = 0);
void handleCorrectionSave();

class ThermHygroMeterCorrectionHandler {
 public:
  static ThermHygroMeterCorrectionHandler& getInstance();
  void addThermHygroMeter(Supla::Sensor::ThermHygroMeter* newMeter);
  std::vector<Supla::Sensor::ThermHygroMeter*>& getThermHygroMeters();

 private:
  ThermHygroMeterCorrectionHandler();
  std::vector<Supla::Sensor::ThermHygroMeter*> thermHygroMeters;
};

#endif  // ifndef SuplaWebCorrection_h
