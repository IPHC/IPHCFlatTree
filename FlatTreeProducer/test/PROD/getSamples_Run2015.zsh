#!/bin/env zsh

wget --no-check-certificate \
--output-document=samples_Run2015.txt \
"https://cmsweb.cern.ch/das/request?view=plain&instance=prod%2Fglobal&input=dataset%3D%2F*%2F*Run2015*%2FMINIAOD+|+sort+dataset.name"
