#ifndef CAMERAFRAMEGRABBER_H
#define CAMERAFRAMEGRABBER_H

#include <QAbstractVideoSurface>
#include <QList>
#include <QLabel>
#include "picprocess.h"

class CameraFrameGrabber : public QAbstractVideoSurface
{
    Q_OBJECT
public:
    explicit CameraFrameGrabber(QObject *parent = 0);

    QList<QVideoFrame::PixelFormat> supportedPixelFormats(QAbstractVideoBuffer::HandleType handleType) const;

    bool present(const QVideoFrame &frame);
private:
    QLabel* show_label;

signals:
    void frameAvailable(QImage frame);

//public slots:

};

#endif // CAMERAFRAMEGRABBER_H
