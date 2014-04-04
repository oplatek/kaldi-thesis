class ASRInterface(object):

    def rec_in(self, frame):

    def flush(self):

    def hyp_out(self):

    def rec_wav(self, pcm):
        self.rec_in(pcm)
        return self.hyp_out()
