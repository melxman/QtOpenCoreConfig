#ifndef METHOD_H
#define METHOD_H

#include <QDir>
#include <QFileDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QObject>
#include <QTableWidget>
#include <QWidget>

class Method : public QMainWindow {
  Q_OBJECT
 public:
  explicit Method(QWidget* parent = nullptr);

  void goTable(QTableWidget* table);
  QWidget* getSubTabWidget(int m, int s);
  void goACPITable(QTableWidget* table);
  void goBooterTable(QTableWidget* table);
  void goDPTable(QTableWidget* table);
  void goKernelTable(QTableWidget* table);
  void goMiscTable(QTableWidget* table);
  void goNVRAMTable(QTableWidget* table);

  void findTable(QString findText);
  void init_Table(int index);
  QString getTabTextName(int index);

  QString copyTools(QString pathSource, QString pathTarget);
  QString copyACPI(QString pathSource, QString pathTarget);
  QString copyKexts(QString pathSource, QString pathTarget);
  QString copyDrivers(QString pathSource, QString pathTarget);
  void findDP(QTableWidget* t, QString findText);
  void findNVRAM(QTableWidget* t, QString findText);

  void set_nv_key(QString key, QString dataType);

  void UpdateStatusBarInfo();
 public slots:
  void on_GenerateEFI();
  void on_btnExportMaster();
  void on_btnImportMaster();

 signals:
};

#endif  // METHOD_H
