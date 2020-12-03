#!/bin/bash
#===============================================================================
#
#          FILE: configure_env.sh
#
#         USAGE: ./configure_env.sh
#
#   DESCRIPTION: 
#
#       OPTIONS: ---
#  REQUIREMENTS: ---
#          BUGS: ---
#         NOTES: ---
#        AUTHOR: YOUR NAME (), 
#  ORGANIZATION: 
#       CREATED: 12/03/2020 03:30:38 PM
#      REVISION:  ---
#===============================================================================

set -o nounset                                  # Treat unset variables as an error

aclocal
autoconf
autoheader
automake --add-missing
./configure
make
