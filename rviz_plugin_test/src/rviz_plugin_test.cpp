#include "rviz_plugin_test/rviz_plugin_test.hpp"

MyPlugin::MyPlugin(QWidget *parent)
    : Panel(parent)
{
  QHBoxLayout *topic_layout = new QHBoxLayout;
  topic_layout->addWidget(new QLabel("Hello world!"));
  QVBoxLayout *layout = new QVBoxLayout;
  layout->addLayout(topic_layout);
  setLayout(layout);
}

MyPlugin::~MyPlugin() {}

void MyPlugin::save(rviz_common::Config config) const
{
  Panel::save(config);
}

void MyPlugin::load(const rviz_common::Config &config)
{
  Panel::load(config);
}

#include <pluginlib/class_list_macros.hpp>
PLUGINLIB_EXPORT_CLASS(MyPlugin, rviz_common::Panel)
