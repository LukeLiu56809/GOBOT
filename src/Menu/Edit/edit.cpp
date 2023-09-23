#include "edit.h"
#include <QApplication>
#include <QLineEdit>
#include <QMenuBar>
#include <QInputDialog>

Edit::Edit(QMainWindow *parent) : QObject(parent)
{
    createEditMenu(parent);
}

void Edit::createEditMenu(QMainWindow *parent)
{
    QMenu *editMenu = parent->menuBar()->addMenu(tr("Edit"));

    undoAction = new QAction(tr("Undo"), parent);
    redoAction = new QAction(tr("Redo"), parent);
    cutAction = new QAction(tr("Cut"), parent);
    copyAction = new QAction(tr("Copy"), parent);
    pasteAction = new QAction(tr("Paste"), parent);
    deleteAction = new QAction(tr("Delete"), parent);
    replaceAction = new QAction(tr("Replace"), parent);

    undoAction->setShortcut(QKeySequence::Undo);
    redoAction->setShortcut(QKeySequence::Redo);
    cutAction->setShortcut(QKeySequence::Cut);
    copyAction->setShortcut(QKeySequence::Copy);
    pasteAction->setShortcut(QKeySequence::Paste);
    deleteAction->setShortcut(QKeySequence::Delete);

    connect(undoAction, &QAction::triggered, this, &Edit::undoActionTriggered);
    connect(redoAction, &QAction::triggered, this, &Edit::redoActionTriggered);
    connect(cutAction, &QAction::triggered, this, &Edit::cutActionTriggered);
    connect(copyAction, &QAction::triggered, this, &Edit::copyActionTriggered);
    connect(pasteAction, &QAction::triggered, this, &Edit::pasteActionTriggered);
    connect(deleteAction, &QAction::triggered, this, &Edit::deleteActionTriggered);
    connect(replaceAction, &QAction::triggered, this, &Edit::replaceActionTriggered);

    editMenu->addAction(undoAction);
    editMenu->addAction(redoAction);
    editMenu->addSeparator();
    editMenu->addAction(cutAction);
    editMenu->addAction(copyAction);
    editMenu->addAction(pasteAction);
    editMenu->addAction(deleteAction);
    editMenu->addSeparator();
    editMenu->addAction(replaceAction);
}

void Edit::undoActionTriggered()
{
    QWidget *focusWidget = QApplication::focusWidget();
    if (focusWidget && focusWidget->inherits("QLineEdit"))
    {
        QLineEdit *lineEdit = qobject_cast<QLineEdit*>(focusWidget);
        if (lineEdit)
            lineEdit->undo();
    }
}

void Edit::redoActionTriggered()
{
    QWidget *focusWidget = QApplication::focusWidget();
    if (focusWidget && focusWidget->inherits("QLineEdit"))
    {
        QLineEdit *lineEdit = qobject_cast<QLineEdit*>(focusWidget);
        if (lineEdit)
            lineEdit->redo();
    }
}

void Edit::cutActionTriggered()
{
    QWidget *focusWidget = QApplication::focusWidget();
    if (focusWidget && focusWidget->inherits("QLineEdit"))
    {
        QLineEdit *lineEdit = qobject_cast<QLineEdit*>(focusWidget);
        if (lineEdit)
            lineEdit->cut();
    }
}

void Edit::copyActionTriggered()
{
    QWidget *focusWidget = QApplication::focusWidget();
    if (focusWidget && focusWidget->inherits("QLineEdit"))
    {
        QLineEdit *lineEdit = qobject_cast<QLineEdit*>(focusWidget);
        if (lineEdit)
            lineEdit->copy();
    }
}

void Edit::pasteActionTriggered()
{
    QWidget *focusWidget = QApplication::focusWidget();
    if (focusWidget && focusWidget->inherits("QLineEdit"))
    {
        QLineEdit *lineEdit = qobject_cast<QLineEdit*>(focusWidget);
        if (lineEdit)
            lineEdit->paste();
    }
}

void Edit::deleteActionTriggered()
{
    QWidget *focusWidget = QApplication::focusWidget();
    if (focusWidget && focusWidget->inherits("QLineEdit"))
    {
        QLineEdit *lineEdit = qobject_cast<QLineEdit*>(focusWidget);
        if (lineEdit)
            lineEdit->clear();
    }
}

void Edit::replaceActionTriggered()
{
    QWidget *focusWidget = QApplication::focusWidget();
    if (focusWidget && focusWidget->inherits("QLineEdit"))
    {
        QLineEdit *lineEdit = qobject_cast<QLineEdit*>(focusWidget);
        if (lineEdit)
        {
            QString searchText = QInputDialog::getText(nullptr, "Replace", "Find Text:");
            if (!searchText.isEmpty())
            {
                QString replaceText = QInputDialog::getText(nullptr, "Replace", "Replace With:");
                if (!replaceText.isEmpty())
                {
                    lineEdit->setText(lineEdit->text().replace(searchText, replaceText));
                }
            }
        }
    }
}

