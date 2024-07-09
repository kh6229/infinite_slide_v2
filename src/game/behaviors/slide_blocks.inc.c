struct BlockInfo {
    ModelID32 model;
    const BehaviorScript *bhv;
};

struct BlockCoords {
    s16 y;
    s16 z;
};

static struct BlockInfo sBlockInfo[] = {
    {MODEL_SINGLE_STRAIGHT_LINE,    bhvSingleStraightLine},     //  0
    {MODEL_DOUBLE_STRAIGHT_LINE,    bhvDoubleStraightLine},     //  1
    {MODEL_SINGLE_TO_DOUBLE,        bhvSingleToDouble},         //  2
    {MODEL_DOUBLE_TO_SINGLE,        bhvDoubleToSingle},         //  3
    {MODEL_O_BLOCK,                 bhvOBlock},                 //  4
    {MODEL_X_BLOCK,                 bhvXBlock},                 //  5
    {MODEL_BROKEN_L_START,          bhvBrokenLStart},           //  6
    {MODEL_BROKEN_L_MID,            bhvBrokenLMid},             //  7
    {MODEL_BROKEN_L_END,            bhvBrokenLEnd},             //  8
    {MODEL_BROKEN_R_START,          bhvBrokenRStart},           //  9
    {MODEL_BROKEN_R_MID,            bhvBrokenRMid},             // 10
    {MODEL_BROKEN_R_END,            bhvBrokenREnd},             // 11
};

static struct BlockCoords sBlockCoords[] = {
    { 7560,  14962},
    { 6582,  11320},
    { 5604,   7678},
    { 4627,   4036},
    { 3651,    394},
    { 2675,  -3248},
    { 1697,  -6890},
    { 719,  -10532},
    {-259,  -14174},
};

u8 seq[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
s8 xOffset;

void bhv_block_spawner_spawn() {
    u8 x, y, z;
    for (x = 0; x < 2; x++) {
        for (y = 0; y < 9; y++) {
            spawn_object_abs_with_rot(o, 0, sBlockInfo[seq[y]].model, sBlockInfo[seq[y]].bhv,
                                     (xOffset * 10000), sBlockCoords[y].y, sBlockCoords[y].z,
                                     DEGREES(-15), 0, 0);
        }
        xOffset = -1;
    }
    obj_mark_for_deletion(o);
}

void bhv_block_spawner_init() {
    xOffset = 1;
}

