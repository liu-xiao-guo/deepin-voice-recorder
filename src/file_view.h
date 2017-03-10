#ifndef FILEVIEW_H
#define FILEVIEW_H

#include <QListWidget>
#include "file_item.h"

class FileView : public QListWidget
{
    Q_OBJECT
    
public:
    FileView(QListWidget *parent=0);
    
public slots:
    void handleCurentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);
    void handleClickedRenameButton();
    void handlePlay();
    void handlePause();
    void handleResume();
    void handleStop();
    
signals:
    void play(QString filepath);
    void pause(QString filepath);
    void resume(QString filepath);
    void stop(QString filepath);
    
private:
    QListWidgetItem *currentWidgetItem = 0;
    
    bool clickedRenameButton;
};

#endif