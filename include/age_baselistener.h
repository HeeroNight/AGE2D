#ifndef ABASELISTENER_H
#define ABASELISTENER_H

class AGE_EventMgr;
class QMouseEvent;
class AGE_BaseListener
{
public:
    AGE_BaseListener();
    friend class AGE_EventMgr;
    friend class AGE_Widget;
protected:
    void handleListener();
    virtual void onMouseMove(QMouseEvent *);
    virtual void onMousePress(QMouseEvent *);
    virtual void onMouseRelease(QMouseEvent *);
    virtual void onKeyPress();
private:
};

#endif // ABASELISTENER_H
