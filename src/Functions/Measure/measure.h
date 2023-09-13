#ifndef MEASURE_H
#define MEASURE_H

#include <QObject>
#include <QMap>
#include <QComboBox>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Measure : public QObject
{
    Q_OBJECT

public:
    explicit Measure(Ui::MainWindow *ui, QObject *parent = nullptr);
    QString getSavePath() const;
    QString getNameSave() const;
    QString getSelectedFileName() const;
    QString getFormat() const;

public slots:
    void addFiles();
    void removeFiles();
    void saveFiles();
    void resetMeasure();
    void measureFiles();

private slots:
    void onMeasureAddFileClicked();
    void onMeasureRemoveFileClicked();
    void onMeasureSaveAsClicked();
    void onMeasureResetClicked();
    void onMeasureButtonClicked();
    void onReasonerCheckboxStateChanged(int checked);

private:
    QMap<QString, QString> measure_filesMap;
    Ui::MainWindow *measure_ui;
    QComboBox *reasoner;
};

#endif // MEASURE_H
