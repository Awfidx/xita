<li>
                <div class="navdiv">
                    <a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a>
                </div>
                <div class="navshow" style="display: none;">
                    <ul>
                        {dede:channel type='son' noself='yes'}
                        <li>
                            <a href="[field:typelink/]">[field:typename/]</a>
                        </li>
                        {/dede:channel}
                    </ul>
                </div>
            </li>