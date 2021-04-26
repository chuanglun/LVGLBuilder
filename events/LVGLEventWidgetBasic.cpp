#include "LVGLEventWidgetBasic.h"

#include <LVGLObject.h>

#include "LVGLCore.h"
#include "LVGLSimulator.h"

LVGLEventWidgetBasic::LVGLEventWidgetBasic() {
  auto objs = lvgl->allObjects();

  for (auto o : objs) m_objName << o->name();

  m_propertyList = QStringList() << "X"
                                 << "Y"
                                 << "Width"
                                 << "Height"
                                 << "Clickable"
                                 << "Hidden"
                                 << "Disabled"
                                 << "Dragable";
  m_valueList = QStringList() << QObject::tr("On") << QObject::tr("Off");
}
