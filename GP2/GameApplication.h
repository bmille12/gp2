#pragma once

#include "Win32Window.h"
#include <D3D10.h>
#include <D3DX10.h>

class CGameApplication
{
public:
	CGameApplication(void);
	~CGameApplication(void);
	ID3D10Effect* m_pEffect;
	ID3D10EffectTechnique* m_pTechnique;

	bool init();
	bool run();
private:
	bool initGraphics();
	bool initWindow();
	bool initGame();

	void render();
	void update();
private:
	ID3D10Device * m_pD3D10Device;
	IDXGISwapChain * m_pSwapChain;
	ID3D10RenderTargetView * m_pRenderTargetView;
	CWin32Window * m_pWindow;

	ID3D10Buffer* m_pVertexBuffer;

};

