#ifndef COOLPLAYER_H
#define COOLPLAYER_H

#include <QMainWindow>
#include <QMediaPlayer>
namespace Ui {
class CoolPlayer;
}

class CoolPlayer : public QMainWindow
{
    Q_OBJECT

public:
    explicit CoolPlayer(QWidget *parent = 0);
    ~CoolPlayer();

private slots:
    void on_OpenFile_clicked();

    void on_PauseMusic_clicked();

    void on_PlayMusic_clicked();

    void on_PlayList_doubleClicked(const QModelIndex &index);

    void on_Volume_valueChanged(int value);

private:
    Ui::CoolPlayer *ui;
    QMediaPlayer *player;
};

#endif // COOLPLAYER_H
