var rotationTri = 0;
var rotationQuad = 0;

function initRendering() {
    Gl.clearColor(0.0, 0.0, 0.0, 0.5)
        .clearDepth(1.0)
        .enable(Gl.DEPTH_TEST)
        .enable(Gl.COLOR_MATERIAL)
}

function drawScene() {
    Gl.clear(Gl.COLOR_BUFFER_BIT | Gl.DEPTH_BUFFER_BIT)
        .matrixMode(Gl.MODELVIEW)
        .loadIdentity()

        .translatef(-1.5,0.0,-6.0)

        .rotatef(rotationTri, 0.0, 1.0, 0.0)
        .begin(Gl.TRIANGLES)
            .color3f(1.0, 0.0, 0.0) //RED
            .vertex3f(0.0, 1.0, 0.0)
            .color3f(0.0, 1.0, 0.0) //GREEN
            .vertex3f(-1.0, -1.0, 0.0)
            .color3f(0.0, 0.0, 1.0) //BLUE
            .vertex3f(1.0, -1.0, 0.0)
        .end()

        .loadIdentity()
        .translatef(1.5, 0.0, -6.0)

        .rotatef(rotationQuad, 1.0, 0.0, 0.0)
        .color3f(0.5, 0.5, 1.0) //SKY BLUE
        .begin(Gl.QUADS)
            .vertex3f(-1.0, 1.0, 0.0)
            .vertex3f(1.0, 1.0, 0.0)
            .vertex3f(1.0, -1.0, 0.0)
            .vertex3f(-1.0, -1.0, 0.0)
        .end()

   
    Glut.swapBuffers();
}

function handleResize(width, height) {
	Gl.viewport(0, 0, width, height)
	  .matrixMode(Gl.PROJECTION)
	  .loadIdentity();

	Glu.perspective(80.0, width / height, 1.0, 5000.0);
}

function timerCallback() {
    rotationTri += 0.2;
    rotationQuad -= 0.15;

    if(rotationTri > 360) 
        rotationTri -= 360

    if(rotationQuad < 0)
        rotationQuad += 360

    Glut.postRedisplay();
    Glut.timerFunc(1, arguments.callee, 0);
}

function main() {
    Glut.init();
    Glut.initDisplayMode(Glut.DOUBLE | Glut.RGB | Glut.DEPTH);
    Glut.initWindowSize(500, 500);
    Glut.createWindow("NeHe's Lesson 4 in v8-gl");
    initRendering();
    Glut.displayFunc(drawScene);
    Glut.reshapeFunc(handleResize);
    Glut.timerFunc(1, timerCallback, 0);
    Glut.mainLoop();
}
main();
