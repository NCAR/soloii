/* 	$Id$	 */

struct dd_stats {
    double time0;
    double MB;
    int vol_count;
    int sweep_count;
    int beam_count;
    int rec_count;
    int ray_count;
    int file_count;
    int byte_count;
    int bad_ray_count;
    int special_stats[16];
};

