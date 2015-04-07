#define GLI_INCLUDE_GL_ATI_PN_TRIANGLES

enum Main {

  GL_PN_TRIANGLES_ATI                        = 0x87F0,
  GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI  = 0x87F1,
  GL_PN_TRIANGLES_POINT_MODE_ATI             = 0x87F2,
  GL_PN_TRIANGLES_NORMAL_MODE_ATI            = 0x87F3,
  GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI      = 0x87F4,
  GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI      = 0x87F5,
  GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI       = 0x87F6,
  GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI     = 0x87F7,
  GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI  = 0x87F8,

};

void glPNTrianglesiATI(GLenum[Main] pname, GLint param);
void glPNTrianglesfATI(GLenum[Main] pname, GLfloat param);