/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCTermDumper : NSObject {
    int _curAttrs;
    int _curBg;
    int _curFg;
    int _fd;
    unsigned long long _termWidth;
    unsigned long long _usedTermWidth;
    bool_isatty;
    bool_useColor;
}

@property(readonly) bool isatty;
@property(readonly) bool useColor;

- (void)_putsAndCrop:(const char *)arg1 len:(unsigned long long)arg2;
- (unsigned long long)_startInCString:(BOOL[256])arg1 fgColor:(int)arg2 bgColor:(int)arg3 attr:(int)arg4;
- (void)changeAttributes:(int)arg1;
- (void)changeBgColor:(int)arg1;
- (void)changeFgColor:(int)arg1;
- (void)cursorDown:(unsigned int)arg1;
- (void)cursorLeft:(unsigned int)arg1;
- (void)cursorRestore;
- (void)cursorRight:(unsigned int)arg1;
- (void)cursorSave;
- (void)cursorUp:(unsigned int)arg1;
- (void)endLine;
- (void)eraseEndOfLine;
- (void)eraseLine;
- (void)eraseScreenDown;
- (void)eraseScreenUp;
- (void)eraseStartOfLine;
- (id)initWithFd:(int)arg1 forceColor:(bool)arg2;
- (bool)isatty;
- (void)puts:(const char *)arg1 len:(unsigned long long)arg2;
- (void)puts:(const char *)arg1;
- (void)reset;
- (void)startAttributes:(int)arg1;
- (void)startBgColor:(int)arg1 attr:(int)arg2;
- (void)startBgColor:(int)arg1;
- (void)startFgColor:(int)arg1 attr:(int)arg2;
- (void)startFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (void)startFgColor:(int)arg1;
- (void)startNewLine;
- (void)startPager;
- (id)startStringForFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (id)stringForReset;
- (bool)useColor;
- (void)write:(const char *)arg1;

@end