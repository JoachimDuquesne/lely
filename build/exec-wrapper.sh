#!/bin/sh

SCRIPT_EXEC=
BINFMT_EXEC=

[ -x "$1" ] || exit $?
if [ "$(head -c 2 $1)" = "#!" ]; then
    exec $SCRIPT_EXEC "$@"
else
    exec $BINFMT_EXEC "$@"
fi

