document.addEventListener('DOMContentLoaded', () => {
    const flexContainer = document.getElementById('flexContainer');
    const resetBtn = document.getElementById('resetBtn');
    const gapInput = document.getElementById('gap');
    const flexDirectionSelect = document.getElementById('flexDirection');
    const justifyContentSelect = document.getElementById('justifyContent');
    const alignItemsSelect = document.getElementById('alignItems');
    const flexGrow1Input = document.getElementById('flexGrow1');
    const flexGrow2Input = document.getElementById('flexGrow2');
    const flexGrow3Input = document.getElementById('flexGrow3');
    const boxes = [
        document.getElementById('box1'),
        document.getElementById('box2'),
        document.getElementById('box3')
    ];
    function updateFlexbox() {
        flexContainer.style.gap = `${gapInput.value}px`;
        flexContainer.style.flexDirection = flexDirectionSelect.value;
        flexContainer.style.justifyContent = justifyContentSelect.value;
        flexContainer.style.alignItems = alignItemsSelect.value;
        boxes[0].style.flexGrow = flexGrow1Input.value;
        boxes[1].style.flexGrow = flexGrow2Input.value;
        boxes[2].style.flexGrow = flexGrow3Input.value;
    }
    gapInput.addEventListener('input', updateFlexbox);
    flexDirectionSelect.addEventListener('change', updateFlexbox);
    justifyContentSelect.addEventListener('change', updateFlexbox);
    alignItemsSelect.addEventListener('change', updateFlexbox);
    flexGrow1Input.addEventListener('input', updateFlexbox);
    flexGrow2Input.addEventListener('input', updateFlexbox);
    flexGrow3Input.addEventListener('input', updateFlexbox);
    resetBtn.addEventListener('click', () => {
        gapInput.value = 0;
        flexDirectionSelect.value = 'row';
        justifyContentSelect.value = 'flex-start';
        alignItemsSelect.value = 'stretch';
        flexGrow1Input.value = 0;
        flexGrow2Input.value = 0;
        flexGrow3Input.value = 0;
        updateFlexbox();
    });
    updateFlexbox(); 
 });