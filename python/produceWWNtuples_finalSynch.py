#!/usr/bin/python
import sys
import os
import commands
from commands import getstatusoutput
import datetime
import argparse
import string
if __name__ == '__main__':
    parser = argparse.ArgumentParser (description = 'produce synch ntuples with WW semileptonic final state')
    parser.add_argument ('-i', '--inputFolder' , default = '/eos/cms/store/caf/user/lbrianza/WWReducedTree_run2' , help='input folder with the reduced trees')
    parser.add_argument ('-o', '--output' , default = 'RSGraviton1000Synch', help='output file')
    parser.add_argument ('-mc', '--ismc' , default = 'False', help='is MC or not')
    parser.add_argument ('-l', '--lepton' , default = 'mu', help='lepton category (mu or el)')
    parser.add_argument ('-t', '--tree' , default = 'TreeMaker2/PreSelection', help='name of the input tree')
    parser.add_argument ('-n', '--name' , default = 'RSGraviton1000' , help='input file')
    parser.add_argument ('-w', '--xsecWeight' , default = '0.0002739' , help='xsec (pb)')
    parser.add_argument ('-no', '--numberOfEntries' , default = '28687' , help='number of initial entries of the dataset')
    args = parser.parse_args ()

    print 'produceWWNtuples_finalSynch.exe '+args.inputFolder+' '+args.output+' '+args.ismc+' '+args.lepton+' '+args.tree+' '+args.name+' '+args.xsecWeight+' '+args.numberOfEntries
    os.system('./produceWWNtuples_finalSynch.exe '+args.inputFolder+' '+args.output+' '+args.ismc+' '+args.lepton+' '+args.tree+' '+args.name+' '+args.xsecWeight+' '+args.numberOfEntries)
