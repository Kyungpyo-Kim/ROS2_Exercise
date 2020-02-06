#pragma once
//
#include <stdio.h>

#include <QPainter>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QLabel>
#include <QTimer>
#include <QtWidgets>

#include <rviz_common/panel.hpp>
#include "rclcpp/rclcpp.hpp"

class QPushButton;
class DriveWidget;

class MyPlugin : public rviz_common::Panel
{
  // This class uses Qt slots and is a subclass of QObject, so it needs
  // the Q_OBJECT macro.
  Q_OBJECT
public:
  explicit MyPlugin(QWidget *parent = 0);
  virtual ~MyPlugin();
  /// Load and save configuration data
  void load(const rviz_common::Config &config) override;
  void save(rviz_common::Config config) const override;
};