class ASRInterface(object):

    ...

    def rec_in(self, frame):
        raise ASRException("Abstract class: Not implemented")

    def flush(self):
        raise ASRException("Abstract class: Not implemented")

    def hyp_out(self):
        raise ASRException("Abstract class: Not implemented")

    ...


    def rec_wav_file(self, wav_path):
        pcm = load_wav(self.cfg, wav_path)
        frame = Frame(pcm)
        res = self.rec_wave(frame)
        self.flush()
        return res
