#pragma once

enum ContentMode : int {
    CONTENT_BOOT       = -1,
    CONTENT_IDLE       = 0,
    CONTENT_LISTENING  = 1,
    CONTENT_THINKING   = 2,
    CONTENT_SPEAKING   = 3,
    CONTENT_PLAYER     = 4,
    CONTENT_ANNOUNCING = 5,
    CONTENT_PLAYING    = 6,
    CONTENT_PAUSING    = 7
};
