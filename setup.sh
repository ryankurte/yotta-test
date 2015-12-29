#!/bin/bash

WDIR=`pwd`

cd testlib && yt link; cd $WDIR
cd testmain && yt link testlib; cd $WDIR

