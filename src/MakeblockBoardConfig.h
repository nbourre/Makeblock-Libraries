// Central board selection. Defaults to Auriga if none specified.
#ifndef MAKEBLOCK_BOARD_CONFIG_H
#define MAKEBLOCK_BOARD_CONFIG_H

// If no board macro is defined by build flags, default to Auriga for beginner-friendly examples.
#if !defined(ME_AURIGA) && !defined(MEGA_PI) && !defined(MEGA_PIPRO) && \
    !defined(MCORE) && !defined(BASEBOARD) && !defined(ORION) && !defined(SHIELD)
#define ME_AURIGA 1
#endif

#endif // MAKEBLOCK_BOARD_CONFIG_H