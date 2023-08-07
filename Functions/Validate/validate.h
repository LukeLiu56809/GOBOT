#ifndef VALIDATE_H
#define VALIDATE_H

#include <QObject>
#include <QMap>

// Forward declaration of Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class Validate : public QObject
{
    Q_OBJECT

public:
    explicit Validate(Ui::MainWindow *ui, QObject *parent = nullptr);
    QString getSavePath() const;
    QString getNameSave() const;
    QString getSelectedFileName() const;
    QString getProfile() const;

public slots:
    void addFiles();
    void removeFiles();
    void saveFiles();
    void resetValidate();
    void validateFiles();

private slots:
    void onValidateAddFileClicked();
    void onValidateRemoveFileClicked();
    void onValidateSaveAsClicked();
    void onValidateResetClicked();
    void onValidateButtonClicked();

private:
    QMap<QString, QString> validate_filesMap;
    Ui::MainWindow *validate_ui;
};

#endif // VALIDATE_H
