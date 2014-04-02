Thesis: Speech recognition using Kaldi
======================================
The repository contains the source code of the thesis and the presentation.
If you want to read the thesis (at particular version-tag) please read the pdf `theses/tags/oplatek_vTAG_NUMBER.pdf` 
where TAG_NUMBER is the highest number available.

Work described
--------------
The links below should correspond to CD content attach with the thesis.

 * Alex - Alex Dialogue System Framework(https://github.com/UFAL-DSG/alex) which I extended by work in following files and directories:
   * https://github.com/UFAL-DSG/alex/alex/components/asr/kaldi.py
   * https://github.com/UFAL-DSG/alex/alex/tools/kaldi/
   * https://github.com/UFAL-DSG/alex/alex/PublicTransportInfoCs/hclg/
 * The Kaldi toolkit - Speech recognition toolkit: I use https://github.com/UFAL-DSG/pykaldi repository for my development which I mirror back to Kaldi http://sourceforge.net/p/kaldi/code/HEAD/tree/sandbox/oplatek2. From my Kaldi sandbox the code can be merged to trunk. For example the training scripts are already merged to trunk. I extended the toolkit by implementing work in following directories:
   * https://github.com/UFAL-DSG/pykaldi/tree/master/src/onl-rec/
   * https://github.com/UFAL-DSG/pykaldi/tree/master/src/pykaldi/
   * https://github.com/UFAL-DSG/pykaldi/tree/master/egs/vystadial/s5/
     This training scripts are already in the Kaldi trunk but there are separated for Czech and English:
     * https://sourceforge.net/p/kaldi/code/HEAD/tree/trunk/egs/vystadial_en/
     * https://sourceforge.net/p/kaldi/code/HEAD/tree/trunk/egs/vystadial_cz/
 * Fork of Python wrapper of OpenFST, where I improved installation and add several simple functions.
   https://github.com/UFAL-DSG/pyfst
 * Repository with graphs and evaluation of the Python wrapper of OnlineLatgenRecogniser:
   https://github.com/oplatek/pykaldi-eval
 * TODO link to reference documentation for C++ code in Kaldi
 * TODO link to reference documentation for Python code in Kaldi
 * TODO link to reference documentation for Python code in Alex
