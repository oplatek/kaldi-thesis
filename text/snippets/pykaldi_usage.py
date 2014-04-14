d = PyOnlineLatgenRecogniser()
d.setup(argv)
while audio_to_process():
    d.audio_in(get_raw_pcm_audio())
    dec_t = d.decode(max_frames=10)
    while dec_t > 0:
        decoded_frames += dec_t
        dec_t = d.decode(max_frames=10)
d.prune_final()
lik, lat = d.get_lattice()
