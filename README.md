Thesis: Automatic speech recognition using Kaldi
================================================
This repository contains the source code of the thesis and its presentation.
If you want to read the thesis please read the most recent version [text/tags/oplatek_thesis011.pdf](text/tags/oplatek_thesis011.pdf?raw=true). 

(The most recent version should point to file with highest number in the file name suffix. For older versions see the [text/tags/](text/tags) directory.) 

Work described
--------------
The text of this thesis describes my work on projects listed below:

 * Alex - Alex Dialogue System Framework(https://github.com/UFAL-DSG/alex) where I added following files and directories:
    * ASR component interfacing PyOnlineLatgenRecogniser - https://github.com/UFAL-DSG/alex/alex/components/asr/kaldi.py
    * Kaldi training scripts modified for Alex - https://github.com/UFAL-DSG/alex/alex/tools/kaldi/
    * Decoding graph (HCLG) scripts, and scripts for ASR evaluation - https://github.com/UFAL-DSG/alex/alex/PublicTransportInfoCs/hclg/
 * The Kaldi toolkit - Speech recognition toolkit where I added following directories:
    * Implementation of OnlineLatgenRecogniser and utilities - https://github.com/UFAL-DSG/pykaldi/tree/master/src/onl-rec/
    * Python wrapper PyOnlineLatgenRecogniser and utilities - https://github.com/UFAL-DSG/pykaldi/tree/master/src/pykaldi/
    * Training scripts for acoustic modelling - https://github.com/UFAL-DSG/pykaldi/tree/master/egs/vystadial/s5/
      The training scripts are also accepted in the Kaldi trunk but they are separated for Czech and English:
         * https://sourceforge.net/p/kaldi/code/HEAD/tree/trunk/egs/vystadial_en/
         * https://sourceforge.net/p/kaldi/code/HEAD/tree/trunk/egs/vystadial_cz/
    * Several demos using OnlineLatgenRecogniser and PyOnlineLatgenRecogniser - https://github.com/UFAL-DSG/pykaldi/tree/master/egs/vystadial/online_demo/

   I am developing the new features in https://github.com/UFAL-DSG/pykaldi repository which I mirror back to my Kaldi sandbox http://sourceforge.net/p/kaldi/code/HEAD/tree/sandbox/oplatek2 which  can be merged to Kaldi trunk.
   
 * pyfst - https://github.com/UFAL-DSG/pyfst - Python wrapper of OpenFST, where I improved installation and added several simple functions. Note I forked the original pyfst library.

 * Pykaldi-eval - https://github.com/oplatek/pykaldi-eval - Repository for evaluation OnlineLatgenRecogniser written in IPython notebook. See interesting graphs.
   
 * TODO link to the reference documentation for C++ code in Kaldi
 * TODO link to the reference documentation for Python code in Kaldi
 * TODO link to the reference documentation for Python code in Alex


 Note: The thesis is compiled for two side printing.
 If you want to print it in colour and save toner color ink print following in color: 3,4,33,34,41-52
 The pages are in grey scale: 1,2,5-32,35-40,53-
