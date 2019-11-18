#include <ApplicationServices/ApplicationServices.h>
#include <unistd.h>

int main(){

    CGEventRef move1 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(3300, 450),
        kCGMouseButtonLeft // ignored
    );

    CGEventPost(kCGHIDEventTap, move1);
    CFRelease(move1);

    return 0;
}